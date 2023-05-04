#include "main.h"

/**
 * get_bit - finds the value of the bit at the specified index
 * @n: bit
 * @index: The index to get the value at
 *
 * Return: If an error occurs - -1. Else the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);  /* error: index out of range*/
	/* */
	return ((n >> index) & 1);
}
