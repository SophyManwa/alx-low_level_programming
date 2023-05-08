#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <errno.h>

void print_error(char *message)
{
	fprintf(stderr, "Error: %s\n", message);
}

void print_elf_header(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "unknown");
	printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "unknown");
	printf("  Version:                           %d\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", header->e_type);
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	if (argc != 2) {
		print_error("Expected one argument");
		exit(98);
	}

	char *filename = argv[1];
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Failed to open file");
		exit(98);
	}

	Elf64_Ehdr header;
	ssize_t num_read = read(fd, &header, sizeof(header));
	if (num_read == -1)
	{
		print_error("Failed to read ELF header");
		exit(98);
	}

	if (num_read < sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
		exit(98);
	}

	print_elf_header(&header);

	if (close(fd) == -1)
	{
		print_error("Failed to close file");
		exit(98);
	}

	return (0);
}

