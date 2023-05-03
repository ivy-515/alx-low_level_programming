#include "lists.h"

/**
 * add_node -  a function that adds a new node
 * at the beginning of a list_t list.
 * @head: a pointer to a pointer to the
 * head of the linked list
 *
 * @str: a pointer to a string
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int lenght = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL || head == NULL || str == NULL)
		return (NULL);

	while (str[lenght])
		lenght++;

	new_node->len = lenght;
	new_node->str = strdup(str);

	if (*head == NULL)
		new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
