#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int num;
	int multiplier = 0;

	while (multiplier <= 9)
	{
		_putchar('0');
		for (num = 1; num <= 9; num++)
		{
			int multiple = num * multiplier;

			_putchar(',');
			_putchar(' ');
			_putchar((multiple / 10) + '0');
			_putchar(',');
		}
		_putchar('\n');
		multiplier++;
	}
}
