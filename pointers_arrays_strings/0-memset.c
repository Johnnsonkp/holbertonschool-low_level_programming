#include <stdio.h>
#include "main.h"
/**
 * _memset - inputs memory into an array
 * @s: array
 * @b: memory value
 * @n: number of byters
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
