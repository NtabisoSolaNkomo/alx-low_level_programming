#include "main.h"
/** 
 * main - prints the last digit of a number
 *
 * Return:
 */

int print_last_digit(int n)
{
	int a;

	a = (n % 10);
	if (a < 0)
	{
		a = (-1 * a);
	}
	_putchar(a + '0');
	return (a);
}
