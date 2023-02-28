#include "main.h"
/*
 * main - prints a string, in reverse
 *
 * Return: 0
 */
void print_re(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o >0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
