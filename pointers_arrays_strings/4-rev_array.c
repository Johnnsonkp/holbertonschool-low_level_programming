#include <stdio.h>
/**
 * reverse_array - reverse array of integers
 * @a: int array
 * @n: number of elements of array
 * Return: function
 */
void reverse_array(int *a, int n)
{
	int i;
	int rev;

	for (i = 0; i < n--; i++)
	{
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
