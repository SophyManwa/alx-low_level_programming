#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, that contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: If str == NULL or insufficient memory is available - NULL..
 */

char *_strdup(char *str)
{
	char *k;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	k = malloc(sizeof(char) * (len + 1));

	if (k == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		k[i] = str[i];
	k[len] = '\0';

	return (k);
}
