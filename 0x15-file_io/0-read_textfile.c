#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a file text & prints it to POSIX stdout.
 * @filename: A pointer to the file name.
 * @letters: The number of letters to be read and printed.
 * Return: If the function fails or filename is NULL - 0.
 * Else the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *to_print;
	ssize_t r, w;
	int file;

	if (filename == NULL)
		return (0);
	to_print = malloc(sizeof(char) * letters);
	if (to_print == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		free(to_print);
		return (0);
	}
	r = read(file, to_print, letters);
	if (r < 0)
	{
		free(to_print);
		return (0);
	}
	if (r > 0)
		w = write(STDOUT_FILENO, to_print, r);
	if (w < r)
	{
		free(to_print);
		return (0);
	}
	w = close(file);
	if (w < 0)
	{
		free(to_print);
		return (0);
	}
	free(to_print);
	return (r);
}
