#include <stdio.h>
/**
 * main - main function prints byte sizes to the console 
 * Return: always 0 (success)
 */
int main(void)
{
	int char_byte = sizeof(char);
	int int_byte = sizeof(int);
	int long_int_byte = sizeof(long int);
	int long_long_int_byte = sizeof(long long int);
	int float_byte = sizeof(float);

	printf("Size of a char: %d byte(s)\n", char_byte);
	printf("Size of an int: %d byte(s)\n", int_byte);
	printf("Size of a long int: %d byte(s)\n", long_int_byte);
	printf("Size of a long long int: %d byte(s)\n", long_long_int_byte);
	printf("Size of a float: %d byte(s)\n", float_byte);
	return (0);
}
