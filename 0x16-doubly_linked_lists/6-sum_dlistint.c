#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) in linked list
 * @head: head of linked list
 *
 * Return: sum of nodes, 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (sum);

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
