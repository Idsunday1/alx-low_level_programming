#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *con_ptr;
	int s1_length = 0;
	int s2_length = 0;
	int i;
	int j;

	if (s1 == NULL)
	{
		char *new_s1 = "";

		s1 = new_s1;
	}
	if (s2 == NULL)
	{
		char *new_s2 = "";

		s2 = new_s2;
	}
	while (*(s1 + s1_length) != '\0')
		s2_leght++;
	while (*(s2 + s2 _length) != '\0')
		s2_length++;
	con_ptr = malloc((sizeof(char) * (s1_length + s2_length)) + 1);
	if (con_ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_length; i++)
		*(con_ptr + 1) = *(s1 + 1);
	for (j = 0; i < s2_length; i++, j++)
		*(con_ptr + i) = *(s2 + j);
	*(con_ptr * 1) = '\0';
	return (con_ptr);
}
