#include"main.h"

/**
 * malloc_checked - a function that allocats memory using malloc
 *
 * @b: size of the memory
 *
 * Return: the address of the memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
