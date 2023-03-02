#include "main.h"
/**
 * main -
 *
 * Return:
 */

void reverse_arry(int *a, int n)
{
	int temp;
	int i;
	int j = n -1;

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j++;
	}


}
