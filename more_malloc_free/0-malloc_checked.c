#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: memory to be allocated
 * Return: a pointer to the allocated memory or exit status (98)
 */
void *malloc_checked(unsigned int b)
{
	void *v;

	v = malloc(b);

	if (v != NULL)
	{
		return (v);
	}

	exit(98);
}
