#include "main.h"

/**
 *  _puts - prints a string followed by a new line
 *  @str: string to be printed
 *  Return: string
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s])
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
