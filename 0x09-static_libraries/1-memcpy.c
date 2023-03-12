#include "main.h"

/**
 * _memcpy
 * @dest:
 * @src:
 * @n:
 *
 * Return:
 */
char *_memcpy(char *dest, cahr *src, unsigned int n)
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
