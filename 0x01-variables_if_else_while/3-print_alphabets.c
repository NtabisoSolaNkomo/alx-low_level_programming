#include <stdio.h>
/** 
 * main - program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 *
 * Return: Always 0
 */

int main(void)
{
	char h;

	for (h = 'a' ; h <= 'z' ; h++)
	{
		putchar(h)
	}

	for (h = 'A' ; h <= 'Z' ; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return(0);
}
