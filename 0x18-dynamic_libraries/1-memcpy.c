#include "main.h"

/**
 * _memcpy - Copies blocks of memory from one location to another.
 * @dest: memory area copied to
 * @src: memory area copied from
 * @n: number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
