#include "main.h"

/**
 * _memcpy - Copies blocks of memory from one location to another.
 * @dest: memory area copied to
 * @src: memory area copied from
 * @n: number of bytes of the memory area to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		dest[i] = src[i];
	}
}
