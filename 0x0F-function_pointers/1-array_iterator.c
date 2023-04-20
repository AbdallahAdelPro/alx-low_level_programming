#include "function_pointers.h"
/**
 * array_iterator - A function that executes another one on each
 * element of an array
 *
 * @array: thr array address
 * @size: the array size
 * @action: the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}
