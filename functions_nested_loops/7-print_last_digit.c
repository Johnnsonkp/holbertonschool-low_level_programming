#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: The number we're taking the last digit of
 * Return: Always 0 (success)
 */
int print_last_digit(int num)
{
	if (num)
	{
		return (num % 10);
		
	}
	return (0);
}
