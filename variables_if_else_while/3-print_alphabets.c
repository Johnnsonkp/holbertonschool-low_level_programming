#include <stdio.h>

/**
 * main - Prints all characters of the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
		if (i == 'z')
		{
			putchar('\n');
		}
	}
	return (0);
}
