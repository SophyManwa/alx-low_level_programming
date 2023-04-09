#include "main.h"

/**
 * print_binary - takes an unsigned long integer n and prints its
 * binary representation.
 * @n: The number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int k = sizeof(unsigned long int) * 8 - 1;
	/* while loop*/
	while (k >= 0)
	{
		putchar((n >> k) & 1 ? '1' : '0');
		k--;
	}
}
