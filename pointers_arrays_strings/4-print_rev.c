#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: stores the string to be reversed
 */
void print_rev(char *s)
{
	size_t length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	if (s[length] == '\0')
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
