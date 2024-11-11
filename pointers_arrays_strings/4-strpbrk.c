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
	int i, counter;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter = 0;

		while (accept[counter])
		{
			if (s[i] == accept[counter])
			{
				return (&s[i]);
			}
			counter++;
		}
	}
	return (NULL);
}
