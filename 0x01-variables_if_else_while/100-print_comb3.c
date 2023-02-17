#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int a;

	for (n = 0 ; n < 9 ; n++)
	{
		a = n +1;
		do {
			putchar('0' + n);
			putchar('0' + a);
			if (n < 8)
			{
				putchar(',');
				putchar(32);
			}
			a++;
		} while (a < 10);
	}
	putchar('\n');
	return (0);
}
