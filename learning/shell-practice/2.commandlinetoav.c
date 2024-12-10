#include <stdio.h>
#include <string.h>
/**
 * main - splits & returns an array of each word of a string
 * Return: (0) if successfl
 */
int main(int ac, char **av)
{
	char *sep = "\\/:;=-";
	char *token;
	char *input = av[1];

	token = strtok(input, sep);

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, sep);
	}

	return (0);
}
