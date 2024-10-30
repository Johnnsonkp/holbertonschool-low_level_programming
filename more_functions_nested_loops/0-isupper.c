#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isupper - Checks for an uppercase character
 * @c: character to be checked
 * Return: 1 if @c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
