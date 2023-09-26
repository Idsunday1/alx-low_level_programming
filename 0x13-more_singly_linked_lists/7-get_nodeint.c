#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a liked list
 * @head: the first node in the linked list
 * @index: index of the node toreturn
 *
 * Return: pointer expected to returns node, or NULL if fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
