#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints "$ ", wait for the user to enter a command,
 * prints it on the next line
 * Return: (0) always on sucess
 */
int main(void)
{
	char *input_line = NULL;
	size_t buffer_size = 0;
	ssize_t char_read;

	while(1)
	{
		printf("$ ");
		char_read = getline(&input_line, &buffer_size, stdin);

		if (char_read == -1)
		{
			printf("\n");
			break;
		}

		printf("%s\n", input_line);
	}

	free(input_line);
	return (0);
}
