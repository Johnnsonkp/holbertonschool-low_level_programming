#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Alwways 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
