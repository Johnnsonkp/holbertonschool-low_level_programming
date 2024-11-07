#include <stdio.h>
/**
 * _strncpy - function that copies a string
 *
 * @dest: arrat of characters to add to
 * @src: array characters to be copied from
 * @n: number of characters to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num;

	for (num = 0; num < n && src[num] != '\0'; num++)
	{
		if (src[num])
		{
			dest[num] = src[num];
		}
	}
	while (num < n)
	{
		dest[num] = '\0';
		num++;
	}
	return (dest);
}
