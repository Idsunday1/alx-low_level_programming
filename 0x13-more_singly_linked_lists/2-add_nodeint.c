#include "lists.h"

/**
 * add_nodeint - the new node is added to the linked list
 * @head: pointer to the first node in the list
 * @n: the inserted data in the new node
 *
 * Return: pointer to the new node, or rather NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
