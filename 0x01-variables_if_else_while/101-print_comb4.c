#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int a;
	int s;

	for (s = 0 ; s != 8 ;s++)
	{
		for (n = s + 1 ; n != 9 ; n++)
		{
			a = n + 1;
			do {
				putchar('0' + s);
				putchar('0' + n);
				putchar('0' + a);
				if (s != 7)
				{
					putchar(',');
					putchar(32);
				}
				i++;
			} while (i != 10);
		}
	}
	putchar('\n');
	return (0);
}

