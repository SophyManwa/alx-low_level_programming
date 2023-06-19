#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *  @s: string to get the length of substring from
 *  @accept: prefix to be checked
 *
 *  Return: the number of bytes in s
 *  consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
