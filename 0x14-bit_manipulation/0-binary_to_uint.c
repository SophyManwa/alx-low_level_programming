#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int.
 * @b: A pointer to a string of zeros and ones.
 * Return: If b is Null or contains characters thats are not
 * 0 or 1 - 0. Else the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int l = 0;

	if (b[l] == '\0')
		return (0);

	while ((b[l] == '0') || (b[l] == '1'))
	{
		num <<= 1;
		num += b[l] - '0';
		l++;
	}

	return (num);
}
