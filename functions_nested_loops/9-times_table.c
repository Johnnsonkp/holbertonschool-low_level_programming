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
			if (multiple > 9)
			{
				int first_digit = multiple / 10;
				int last_digit = multiple % 10;

				_putchar(first_digit + 48);
				_putchar(last_digit + 48);
			}
			if (multiple <= 9)
			{
				_putchar(multiple + 48);
			}
		}
		_putchar('\n');
		multiplier++;
	}
}
