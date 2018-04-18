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
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of linked list
 * @idx: index
 * @n: integer value of node
 *
 * Return: address of new node, return NULL if fails
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	size_t length;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	length = dlistint_len(*h);
	if (idx == length - 1)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	temp = *h;
	while (temp)
	{
		if (i == idx)
		{
			new->next = temp;
			new->prev = temp->prev;
			temp->prev->next = new;
			temp->prev = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	free(new);
	return (NULL);
}
