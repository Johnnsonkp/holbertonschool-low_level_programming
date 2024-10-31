#include <stdio.h>
#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void)
{
	int itr;

	for (itr = 0; itr <= 10; itr++)
	{
		int i = 0;

		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			if (i <= 14)
			{
				_putchar((i % 10) + '0');
			}
			i++;
		}
		_putchar('\n');
	}
}
