#include "main.h"

/**
 *binary_to_uint - converts a binary number to unsigned int.
 *@b: A pointer to a string of zeros and ones.
 *Return: If b is Null or contains characters thats are not
 0 or 1 - 0. Else the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	unsigned int i;

	for (decimal = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[i] == '0')
			decimal <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (decimal);
}
