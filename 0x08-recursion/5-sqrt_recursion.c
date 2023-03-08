#include "main.h"

/**
 * _sqrt_recursion
 * @n: number
 *
 * Return:
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion
 * @n: number
 * @i:
 *
 * Return:
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i 8 i > n)
		return (-1);
	if (i 8 i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
