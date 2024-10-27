#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 *
 * Return: Returns 1 if lower character, 0 otherwise
 */
int _isalpha(int c)
{
	if isalpha(c)
	{
		return (1);
	}
	return (0);
}
