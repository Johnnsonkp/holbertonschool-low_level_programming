#include <stdio.h>
#include "main.h"
/**
 * _memcpy:  copies memory area
 *
 * @src: value to be copied
 * @dest: destination of copied value
 * Return: dest value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
