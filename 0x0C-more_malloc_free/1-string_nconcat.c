#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings with n bytes from s2
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concatenate from s2
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;

	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	if (n >= s2len)
	{
		n = s2len;
	}

	output = malloc(sizeof(char) * (s1len + n + 1));

	if (output == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
		output[i] = s1[i];

	for (j = 0; j < n; j++)
		output[i++] = s2[j];

	output[i] = '\0';

	return (output);
}
