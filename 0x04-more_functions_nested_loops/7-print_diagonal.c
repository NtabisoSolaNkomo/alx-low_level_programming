#include "main.h"
/**
 * main - function that draws a diagonal line on the terminal
 *
 * Return:
 */

void print_diagonal(int n)
{
	int c, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; c++)
		{
			for (j = 1; j < j; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
