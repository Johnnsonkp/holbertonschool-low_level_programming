#include <stdio.h>
#include "main.h"
/**
 * _strstr - function that locates a substring
 *
 * @haystack: input string
 * @needle: substring unput to be found in @haystack
 * Return: returns the substring or NULL
 **/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (needle[i])
	{
		j = 0;
		while (haystack[j])
		{
			if (needle[i] == haystack[j])
			{
				return (needle);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
