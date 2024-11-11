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
	int i, j;
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
		if (s[i] != '\0' && s[i] == accept[i])
		{
			return (s);
		}
		j = i;
		while (j < k)
		{
			s[j] = s[j + 1];
			k++;
		}
	}
	return (NULL);
}
