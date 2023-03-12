#include "main.h"

/**
 * _strcpy
 * @dest
 * @src
 * @n
 *
 * Return:
 */
char *_strcpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
