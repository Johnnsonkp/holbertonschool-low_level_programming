#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Returns: ALways 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
