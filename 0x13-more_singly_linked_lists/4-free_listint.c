#include "lists.h"

/**
  * free_listint - define function
  * @head: describe argument
  * Return: nothing
  */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
