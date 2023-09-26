#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *camel, *rampart;
		size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	camel = head->next;
	rampart = head->next->next;

	while (rampart)
	{
		if (camel == rampart)
		{
			camel = head;
			while (camel != rampart)
			{
				nodes++;
				camel = camel->next;
				rampart = rampart->next;
			}

			camel = camel->next;
			while (camel != rampart)
			{
				nodes++;
				camel = camel->next;
			}

			return (nodes);
		}

		camel = camel->next;
		rampart = rampart->next;
		if (rampart->next != NULL)
			rampart = rampart->next;
		else
			break;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t list safely.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	if (head == NULL)
		return (0);

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else
	{
		size_t i;

		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	return (nodes);
}
