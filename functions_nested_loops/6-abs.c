#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @num: the int being checked
 *
 * Return: Always 0 (success)
 */
int _abs(int num)
{
	if (num)
	{
		return (abs(num));
	}
	return (0);
}
