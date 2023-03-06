#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to locate the character
 * @c: Character to be located
 *
 * Return: 0 if no character is found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
