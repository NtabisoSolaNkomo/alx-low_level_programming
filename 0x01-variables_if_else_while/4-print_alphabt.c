#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, expect for q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if ((c == 'q' || c == 'e') != 1)
		{
			putchar(c);
		}

	}
	putchar('\n');
	return (0);
}
