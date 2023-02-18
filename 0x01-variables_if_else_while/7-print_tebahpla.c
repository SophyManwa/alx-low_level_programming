#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 * Return: 0.
 */
int main(void)
{
	char k;
	/*for loop execution*/
	for (k = 'z'; k >= 'a'; k--)
		putchar(k);
	putchar('\n');
	return (0);
}
