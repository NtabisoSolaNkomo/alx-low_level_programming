#include <stdio.h>

/**
 * main -  prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0
 */

int main(void)
{
	int thor;
	int hunny;
	int tenny;
	int base;

for ( thor = 0 ; thor < 10 ; thor++)
{

	for (hunny = 0 ; hunny <= 10 ; hunny++)
	{

		for (tenny = 0 ; tenny < 10 ; tenny++)
		{
			for ( base = 0 ; base < 10 ; base++)
			{
				putchar('0' + thor);
				putchar('0' + hunny);
				putchar(32);
				putchar('0' + tenny);
				putchar('0' + base);
				if (!(thor == 9 && hunny == 8))
				{
					putchar(',');
					putchar(32);
				}
				base++;
			}
		}
	}
}
	putchar('\n');
	return (0);
}
