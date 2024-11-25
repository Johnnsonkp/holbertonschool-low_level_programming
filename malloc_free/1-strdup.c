#include <main.h>
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 * Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dupe;
	int index = 0;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		length++;
	}

	dupe = malloc(sizeof(char) * (length + 1));

	if (dupe == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		dupe[index] = str[index];
	}
	dupe[length] = '\0';

	return (dupe);
}
