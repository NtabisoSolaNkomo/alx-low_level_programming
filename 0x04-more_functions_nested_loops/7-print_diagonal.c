#include "main.h"
/**
 * main - function that draws a diagonal line on the terminal
 *
 * Return:
 */

void print_diagonal(int n)
{
	int co, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; sp < co; sp++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}