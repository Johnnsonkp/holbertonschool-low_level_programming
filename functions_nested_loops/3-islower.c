#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if the input is a lowercase character
 * @c: checked input
 *
 * Return: Returns 1 if lowercase, otherwise 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
