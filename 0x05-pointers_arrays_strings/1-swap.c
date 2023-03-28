#include"main.h"

/**
 * swap_int - swaps two integers
 *
 * @a: a pointer to the first integer
 * @b: A pointer to the second integer
 *
 * Resturn: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
