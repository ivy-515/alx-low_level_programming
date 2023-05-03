#include "lists.h"

/**
  * pop_listint - pops off the head of the list and returns its contents
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{
	int count;

	listint_t *temp, *current;

	if (head == NULL)
		return (0);
	temp = current = *head;
	if (*head)
	{
		count = current->n;
		*head = current->next;
		free(temp);
	}
	else
		count = 0;
	return (count);
}
