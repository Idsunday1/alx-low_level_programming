#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - will be adding a new node at the end
 * of the list_t list.
 * @head: will be pointing to the head of the linked list.
 * @str: strings stores in the new node.
 * Return: Address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t b;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (b = 0; str[b]; b++)
		;

	new_node->len = b;
	new_node->next = NULL;

	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}

	return (*head);
}
