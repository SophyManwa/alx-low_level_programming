#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except q and e.
 * Return: Always 0.
 */
int main(void)
{
	char a;
	/*Loop for execution*/
	for (a = 'a'; a < 'z' && a != 'q' && a != 'e'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
