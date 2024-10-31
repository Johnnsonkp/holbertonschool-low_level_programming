#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Prints a diagonal line on the terminal
 *
 * @n: is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			int count = 0;

			while (count < i && i > 0)
			{
				_putchar(32);
				count++;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
