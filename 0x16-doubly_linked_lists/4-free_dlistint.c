#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: head of linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
