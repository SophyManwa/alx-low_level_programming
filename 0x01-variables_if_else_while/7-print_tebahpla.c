#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 * Return: 0.
 */
int main(void)
{
	char k = 'z';
	/*while loop execution*/
	while (k <= 'z')
		putchar(k);
		k--;
	putchar('\n');
	return (0);
}
