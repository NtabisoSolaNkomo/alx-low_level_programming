#include "main.h"
#include <stdlib.h>

/**
 * create_arry
 * @size
 * @c
 *
 * Return:
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size(char) *size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
