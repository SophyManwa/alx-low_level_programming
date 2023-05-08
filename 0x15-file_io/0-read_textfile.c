#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - Reads a file text & prints it to POSIX stdout.
 * @filename: A pointer to the file name.
 * @letters: The number of letters to be read and printed.
 * Return: If the function fails or filename is NULL - 0.
 * Else the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, rd, wr;
char *buf;

buf = malloc(sizeof(char) * letters);
if (buf == NULL || filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

rd = read(fd, buf, letters);
if (rd == -1)
return (0);

wr = write(STDOUT_FILENO, buf, rd);
if (wr == -1)
return (0);

close(fd);
free(buf);
return (wr);
}
