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
		for (num = 0; num <= 9; num++)
		{
			int multiple = num * multiplier;

			if (multiple == 0)
			{
				printf("%d", multiple);
			}
			else
			{
				printf("  %d", multiple);
			}
			_putchar(',');
		}
		_putchar('\n');
		multiplier++;
	}
}
