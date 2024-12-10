#include <stdio.h>
/**
 * main - prints all the arguments, without using @ac
 * @ac: number of arguments in @av being passed into main
 * @av: NULL terminated array of strings
 * Return: Always (0) on success
 */
int main(int ac, char **av)
{
	unsigned int i = 0;

	while (av[i] != NULL)
	{
		printf("%s", av[i]);
		printf(" ");
		i++;
	}

	printf("\n");
	return (0);
}
