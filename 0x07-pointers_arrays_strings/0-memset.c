#include "main.h"

/**
 * _memset
 *
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n--;
	}

	return (s);
}
