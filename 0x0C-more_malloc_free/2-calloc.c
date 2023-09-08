#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using calloc
 * @nmemb: number of array members
 * @size: size of each array member
 * Return: pointer to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *output;

	if (nmemb == 0 || size == 0)
		return (NULL);

	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
