#include "main.h"

/**
 * main - Entry point
 * Description: prints 10x the alphabet in lowercase
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
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
