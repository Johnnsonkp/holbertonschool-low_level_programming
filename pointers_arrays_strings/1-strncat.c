#include <stdio.h>
/**
 * _strncat - Concatenates two strings
 *
 * @dest: char arr destination, were @src is appended to
 * @src: char arr to be appended
 * @n: the number of bytes to retrive from @src
 * Return: Returns a concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int idx_dest = 0;
	int index = 0;

	while (dest[idx_dest])
	{
		idx_dest = idx_dest + 1;
	}

	dest[idx_dest + 1] = ' ';

	while (src[index])
	{
		dest[idx_dest + index + 1] = src[n];
		index = index + 1;
	}
	return (dest);
}
