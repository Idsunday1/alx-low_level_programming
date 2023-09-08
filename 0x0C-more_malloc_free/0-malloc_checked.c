#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *output;

	output = malloc(b);
	if (output == NULL)
	{
		exit(98);
	}
	else
	{
		return (output);
	}
}
