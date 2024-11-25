#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers
 * Print the result of the multiplication, followed by a new line.
 * The two numbers and result of the multiplication can be stored
 * in an integer
 * Program does not receive 2 arguments, print Error, followed by a new line,
 * and return 1
 *
 * @argv: argument vector (Index of each element of str)
 * @argc: argument counter (No. of arguments including function name)
 *
 * Return: (0) if success (1) if error
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int mul = num1 * num2;

		printf("%d\n", mul);
	}
	return (0);
}
