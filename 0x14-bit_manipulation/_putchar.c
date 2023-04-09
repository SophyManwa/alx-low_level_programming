#include <unistd.h>

/**
 * _putchar - writes c character to stdout
 * @c: Character to be printed
 * Return: 1, on success
 * On error, return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
