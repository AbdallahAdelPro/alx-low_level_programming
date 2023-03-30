#include "main.h"
/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n; i >= 0; i--)
		tmp = a[n - i];
		a[n - i] = a[i];
		a[i] = tmp;

}
