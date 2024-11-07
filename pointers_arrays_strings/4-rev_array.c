#include <stdio.h>
/**
 * reverse_array - reverse array of integers
 * @a: int array
 * @n: number of elements of array
 * Return: function
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int rev;

	while (i < n)
	{
		rev = a[i];
		a[i] = a[n - 1];
		a[n] = rev;
		i++;
		n--;
	}
}
