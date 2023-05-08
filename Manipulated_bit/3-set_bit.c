#include "main.h"

/**
 * set_bit - sets the value of the bit at the specified index to 1.
 * @n: the pointer to the bit
 * @index: The index to set the value at
 * Return: -1, if an error occurs Else 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);  /** error: index out of range**/
	/**/
	*n ^= (1 << index);
	return (1);
}
