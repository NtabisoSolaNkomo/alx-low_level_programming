#include <stdio.h>
#include "lists.h"

/**
 * listin_len
 *
 * Return:
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
