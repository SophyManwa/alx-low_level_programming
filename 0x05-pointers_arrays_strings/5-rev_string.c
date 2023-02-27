#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string to be reversed
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int len, m, half;
	char temp;
	/*for loop*/
	for (len = 0; s[len] != '\0'; len++)
	;
	m = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - m - 1];
		s[len - m - 1] = s[m];
		s[m] = temp;
		m++;
	}
}
