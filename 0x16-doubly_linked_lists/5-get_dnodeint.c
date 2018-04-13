#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of linked list
 * @index: index of node to be returned
 *
 * Return: node, if it doesn't exist NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
