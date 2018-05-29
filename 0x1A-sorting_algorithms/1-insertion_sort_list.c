#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list with insertion sort
 * @list: doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *key;

	if (*list == NULL || (*list)->next == NULL)
		return;

	key = (*list)->next;
	while (key != NULL)
	{
		while (key->prev != NULL && key->n < key->prev->n)
		{
			key->prev->next = key->next;
			if (key->next != NULL)
				key->next->prev = key->prev;
			key->next = key->prev;
			key->prev = key->prev->prev;
			key->next->prev = key;
			if (key->prev == NULL)
				*list = key;
			else
				key->prev->next = key;
			print_list(*list);
		}
		key = key->next;
	}
}
