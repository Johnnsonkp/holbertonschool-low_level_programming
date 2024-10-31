#include <stdio.h>
#include "main.h"
/**
 * print_square -  prints a square, followed by a new line
 *
 * @size: the is the size of the square
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			int count = size;

			while (count > 0)
			{
				_putchar('#');
				--count;
			}
			_putchar('\n');
		}	
	}
}
