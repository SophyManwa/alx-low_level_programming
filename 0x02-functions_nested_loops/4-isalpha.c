#include "main.h"
/**
 * _isalpha - function that prints alphabetic character.
 * @c: the charcter to be checked
 * Return: 1 if its alphabetic else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
