#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a new one.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int i = 0, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	concatenated = malloc(sizeof(char) * (i + j + 1));
	if (concatenated == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		concatenated[k] = s1[i];
		i++;
		k++;
	}

	j = 0;
	while (s2[j])
	{
		concatenated[k] = s2[j];
		j++;
		k++;
	}

	concatenated[k] = '\0';

	return (concatenated);
}
