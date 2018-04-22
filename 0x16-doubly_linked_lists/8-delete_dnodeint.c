#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: head of doubly linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}


/**
 * delete_dnodeint_at_index -  deletes the node at index of a linked list
 * @head: head of linked list
 * @index: index of node to delete
 *
 * Return: 1 if success, 0 if failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	size_t length;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	length = dlistint_len(*head);
	if (index >= length)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	if (index == (length - 1))
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		free(temp);
	}
	while (temp)
	{
		if (i == index)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
