#include <stdio.h>
#include "lists.h"

/**
 * print_listint
 *
 * Return:
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (nodes);
}
