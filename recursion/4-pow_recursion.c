#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: number to be raised
 * @y: power
 *
 * Return: x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	result *= _pow_recursion(x, y - 1);

	return (result);
}
