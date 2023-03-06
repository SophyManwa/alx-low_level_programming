#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to locate the character
 * @c: first occurrence
 *
 * Return: 0 if no character is found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	/* */
	while (s != c)
	{
		++s;
		++i;
	}
	if (s == c)
	{
		return (s + i);
	}
	else
	{
		return (0);
	}
}
