#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a string that frees a list
 * @head: The head of the linked list.
 * Return: Always return NULL when its nothing
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
