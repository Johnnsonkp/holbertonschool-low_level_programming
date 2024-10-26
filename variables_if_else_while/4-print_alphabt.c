#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Print all the letters except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
		if (i == 'z')
		{
			putchar('\n');
		}
	}
	return (0);
}
