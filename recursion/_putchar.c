#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(int ch)
{
	return (write(1, &ch, 1));
}
