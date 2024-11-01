#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: stores the value of the string
 */

void _puts(char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	write(1, str, length);
	write(1, "\n", 1);
}
