#include <stdio.h>
#include <ctype.h>
/**
 * main - Print all the letters of the alphabet using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	for(int i = 'A'; i <= 'Z'; i++)
	{
		int lower_char = tolower(i);
		putchar(lower_char);
		if(i == 'Z')
		{
			putchar('\n');
		}
	}
	return (0);
}
