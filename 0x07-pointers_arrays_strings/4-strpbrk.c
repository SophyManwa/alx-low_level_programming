#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 * Return: If a set is matched - a pointer to the matched byte.
 * If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accepts[i]; i++)
	{
		if (*s[i] == accepts[i])
			return (s);
	}
	return ('\0');
}
