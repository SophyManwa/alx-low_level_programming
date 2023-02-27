#include "main.h"

/**
 * print_rev - prints a string in reverse followed by \n.
 * @s: string to be reversed
 * Return: 0
 */
void print_rev(char *s)
{
	int j = 0;

	while (s[j])
		j++;
	while (j--)
		_putchar(s[j]);
	_putchar('\n');
}
