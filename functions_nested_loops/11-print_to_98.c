#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	int num;

	for (num = n; num <= 98; num++)
	{
		printf("%d, ", num);
	}
	printf('\n');
}
