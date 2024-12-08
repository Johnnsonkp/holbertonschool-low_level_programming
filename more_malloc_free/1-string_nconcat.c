#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string to concate to @s1
 * @n: number of char from @s2 to concat to @s1
 * Return: pointer point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_concat;
	unsigned int s1_count, s2_count, i;

	s1_count = 0;
	s2_count = 0;

	if (s1 == NULL || s1 == 0)
		s1 = "";

	if (s2 == NULL || s2 == 0)
		s2 = "";

	while (s1[s1_count])
		s1_count++;

	while (s2[s2_count])
		s2_count++;

	if (n >= s2_count)
		n = s2_count;

	str_concat = malloc(sizeof(char) * (s1_count + n + 1));

	if (str_concat == NULL || str_concat == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		str_concat[i] = s1[i];
	}

	for (i = 0; i < n && i < s2_count; i++)
	{
		if (s2[i] == '\0')
		{
			break;
		}
		str_concat[s1_count] = s2[i];
		s1_count++;
	}

	str_concat[s1_count] = '\0';
	return (str_concat);
}
