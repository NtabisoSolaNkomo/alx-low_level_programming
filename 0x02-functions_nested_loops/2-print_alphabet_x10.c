#include "main.h"

/**
 * main - prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0
 */
void print_alphabet__x10(void)
{
	int c; co;

	co =0;

	while (co < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		co++;
		_putchar('\n');
	}
}
