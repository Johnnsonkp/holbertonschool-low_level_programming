#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Returns first occurrence of char in the @accept
 *
 * @s: input string
 * @accept: input string
 * Return: Returns string or null
 **/
char *_strpbrk(char *s, char *accept)
{
	int i, j, counter;
	int length = 0;
	int k = 0;

	while (accept[length])
	{
		length++;
	}
	while (s[k])
	{
		k++;
	}
	for (i = 0; i < length; i++)
	{
		counter = 0;
		j = i;

		if (s[i] == '\0')
		{
			return (NULL);
		}
		while (accept[counter])
		{
			if (s[i] == accept[counter])
			{
				return (s);
			}
			counter++;
		}
		while (j < k)
		{
			s[j] = s[j + 1];
			k++;
		}
	}
	return (NULL);
}
