#include <stdio.h>
/**
 * _strcat - concatenates two strings
 *
 * @src: The src string passed into the function
 * @dest: The destination where the string is stored
 *
 * Return: the @dest string with @src appended
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int i = 0;

	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[i] != '\0')
	{
		dest[index + i] = src[i];
		i++;
	}
	dest[index + i + 1] = '\0';
	return (dest);
}
