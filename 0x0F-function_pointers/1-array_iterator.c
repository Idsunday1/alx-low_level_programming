#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print each array elem on a newline
 * @array: The array to iterate over
 * @size: The number of elements in the array
 * @action: A pointer to the function to apply to each element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
