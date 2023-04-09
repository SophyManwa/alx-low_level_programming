#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int.
 * @b: A pointer to a string of zeros and ones.
 * Return: If b is Null or contains characters thats are not
 * 0 or 1 - 0. Else the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (int m = 0; b[m] != '\0'; m++)
	{
		if (b[m] == '0')
			result = (result << 1);
		else if (b[m] == '1')
			result = (result << 1) | 1;
		else
			return (0);
	}

	return (result);
}

