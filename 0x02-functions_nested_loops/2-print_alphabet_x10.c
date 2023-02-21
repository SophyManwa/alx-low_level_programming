#include "main.h"

/**
 * print_alphabet - prints 10 times the alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char ch;

	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
