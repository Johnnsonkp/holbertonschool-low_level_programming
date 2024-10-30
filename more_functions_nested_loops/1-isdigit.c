#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the variable to be checked
 * Return: Returns 1 if @c is a digit, else 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
