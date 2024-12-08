#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: int
 * @size: byte size to be allocated
 * Return: returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	void *temp;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	c = malloc(nmemb * size);
	temp = c;

	if (c == 0)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		c[i] = 0;
	}

	return (temp);
}
