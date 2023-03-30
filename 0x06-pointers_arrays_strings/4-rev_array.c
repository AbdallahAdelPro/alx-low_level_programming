#include "main.h"
/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
		printf("%d", a[i]);
	return ();

}
