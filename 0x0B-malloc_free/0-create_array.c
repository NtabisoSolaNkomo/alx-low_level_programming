#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_arry
 * @size
 * @c
 *
 * Return:
 */
char *create_array(unsigned int size, char c)
{
	char *pstr;
	unsigned int i;

	pstr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		pstr[i] = c;
	pstr[i] = 0;
	return (size < 1 ? 0 : pstr);
}
