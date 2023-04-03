#include "list.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_listint2
 * @head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (!head || !*head)
		return;
	while (*head)
	{
		listint_t *tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = 0;
}
