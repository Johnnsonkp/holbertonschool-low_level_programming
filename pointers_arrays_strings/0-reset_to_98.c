#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - takes a pointer to an int as parameter...
 * @n: int value to be updated by pointer
 */
void reset_to_98(int *n)
{
	int *ptr = n;
	*ptr = 98;
}
