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
	int index;

	while (dest[idx_dest])
	{
		if (dest[idx_dest] != '\0')
		{
			idx_dest++;
		}	
	}
	for (index = 0; index < n && src[index]; index++)
	{
		dest[idx_dest + index] = src[index];
		if (index + 1 == n)
		{
			dest[idx_dest + index + 1] = '\0';
		}
	}
	return (dest);
}
