#include "lists.h"

/**
 * add_node_end -  a function that adds
 * a new node at the end of a list_t list.
 * @head: head
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *temp;
	unsigned int length = 0;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL || str == NULL || head == NULL)
		return (NULL);

	while (str[length])
	{
		length++;
	}

	end_node->len = length;
	end_node->str = strdup(str);

	if (!(*head))
	{
		end_node->next = *head;
		*head = end_node;
	}
	else
	{
		end_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = end_node;

	}
	return (end_node);
}
