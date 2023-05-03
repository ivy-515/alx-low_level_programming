#include "lists.h"

/**
 * list_len - a function that returns the
 * number of elements in a linked list_t list.
 *
 * @h: head of linked list
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
