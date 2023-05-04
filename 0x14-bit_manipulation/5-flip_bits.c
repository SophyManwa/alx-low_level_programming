#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be flipped to
 * get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;/*XOR operation*/
	unsigned int count = 0;
	unsigned long int k = 1;

	while (k != 0)
	{
		if (res & k)
		{
			count++;
		}
		k <<= 1; /*shift the m to the left*/
	}
	return (count);
}
