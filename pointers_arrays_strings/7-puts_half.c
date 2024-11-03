#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: The string value passed into the function
 */
void puts_half(char *str)
{
	int index = 0, length = 0, i;

	while (str[index++])
	{
		length++;
	}

	if ((length % 2) == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length + 1) / 2;
	}	
	for (index = i; index < length; index++)
	{
		_putchar(str[index]);
	}	
	_putchar('\n');
}
