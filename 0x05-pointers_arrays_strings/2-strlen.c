#include "main.h"
/*
 * main - returns the length of a string
 *
 * Return:
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
