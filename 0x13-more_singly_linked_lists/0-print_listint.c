#include "lists.h"

/**
 * print_listint - points all the elements of a linked list
 * @j: linked list of the type listint_t to print elements
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *j)
{
	size_t num = 0;

	while (j)
	{
		printf("%d\n", j->n);
		num++
			j = j->next;
	}

	return (num);
}
