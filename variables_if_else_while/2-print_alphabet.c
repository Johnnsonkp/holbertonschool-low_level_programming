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
	int lower_char;

	for (i = 'A'; i <= 'Z'; i++)
	{
		lower_char = tolower(i);
		putchar(lower_char);
		if (i == 'Z')
		{
			putchar('\n');
		}
	}
	return (0);
}
