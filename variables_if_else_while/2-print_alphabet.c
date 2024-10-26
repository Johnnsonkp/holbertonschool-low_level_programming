#include <stdio.h>
#include <ctype.h>
/**
 * main - Print all the letters of the alphabet using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

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
