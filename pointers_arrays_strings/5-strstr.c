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
	int needle_length = 0;

	while (needle[needle_length])
	{
		needle_length++;
	}

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && j < needle_length)
			{
				j++;	
			}
			if (j == needle_length)
			{
				return &haystack[i];
			}
		}
		i++;
	}
	return (NULL);
}
