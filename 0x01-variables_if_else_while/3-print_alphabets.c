#include <stdio.h>

/**
 * main - Prints alphabet in lowercase and then uppercase.
 * Return: Always 0.
 */
int main(void)
{
	char a;
	/*For loop for execution*/
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
