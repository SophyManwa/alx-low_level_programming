#include "variadic_functions.h"
#include <unistd.h>
/**
 * _putchar - writes the character c into stdout
 * @c: The character to print
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
