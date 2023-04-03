#include <stdlib.h>
#include "lists.h"

/**
 * free_listint
 * @head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
}
