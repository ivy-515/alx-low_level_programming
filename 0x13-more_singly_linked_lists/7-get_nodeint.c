#include "lists.h"

/**
  * get_nodeint_at_index - gets the nth node of the list
  * @head: head of the list
  * @index: which node to stop at
  * Return: pointer to the nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count;

	current = head;
	for (count = 0; count < index && current != NULL; count++)
		current = current->next;

	return (current == NULL ? NULL : current);
}
