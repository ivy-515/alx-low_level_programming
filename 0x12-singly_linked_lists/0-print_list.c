#include "lists.h"

/**
 * print_list -  a function that prints
 * all the elements of a list_t list.
 * @h: headof linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0](nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
