# include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 * Main - prints the alphabet in lowercase.
 * Return : Always 0
 */

int main(void)
{
	char a;
	/*for loop for execution*/
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}

