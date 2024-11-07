#include <stdio.h>
/**
 * _strcmp - function that compare string values
 * @s1: first input string
 * @s2: second input string
 * Return: Always 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
