#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints the sign of a number
 * @n: the int being compared to 0
 *
 * Return: returns 1 || -1 || 0 if n is > than, < than or == to 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
