#include "lists.h"

/**
 * add_nodeint -  a function that adds a new node at
 * the beginning of a listint_t list.
 * @head: head
 * @n: iteger
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start_node;

	start_node = *head;

	*head = malloc(sizeof(listint_t));

	if (!(*head))
		return (NULL);

	(*head)->n = n;
	(*head)->next = start_node;

	return (*head);
}
