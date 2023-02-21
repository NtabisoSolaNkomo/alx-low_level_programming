#include "main.h"

/**
 * main - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return:
 */

void jack_bauer(void)
{
	int i, j;

	i = 0;
	
	for (i = 0; i < 24; i++)
	{ 
		j = 0;
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
