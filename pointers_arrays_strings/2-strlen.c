#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: variable holding the string
 *
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
