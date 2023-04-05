#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint
 * @head
 *
 * Return:
 */
int pop_listint(listint_t **head)
{
	listint_t *second;
	int data;

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	second = (*head)->next;
	(*head)->next = 0;
	free(*head);
	*head = second;
	return (data);
}
