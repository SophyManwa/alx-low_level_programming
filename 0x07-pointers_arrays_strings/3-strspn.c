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
	unassigned int b = 0;
	int i = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}
		else if (accept[i + 1] == '\0')
			return (b);
	}
	s++;
	}
	return (b);
}
