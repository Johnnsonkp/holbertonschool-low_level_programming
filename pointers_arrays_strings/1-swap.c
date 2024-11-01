#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: int value to be swaped with @b
 * @b: int value to be swaped with @a
 */
void swap_int(int *a, int *b)
{
	int num_a = *a;
	*a = *b;
	*b = num_a;
}
