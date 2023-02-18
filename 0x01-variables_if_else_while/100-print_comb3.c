#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int s, k;
	/*for loop and if execution*/
	for (s = 0; s < 9; s++)
	{
		for (k = s + 1; k < 10; k++)
		{
			putchar((s % 10) + '0');
			putchar((k % 10) + '0');
			/*if execution*/
			if (s == 8 && k == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
