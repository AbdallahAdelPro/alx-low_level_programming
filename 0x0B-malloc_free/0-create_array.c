#include"main.h"

/**
 * create_array - a function to create an an array
 *
 * @size: the size of the array
 * @c: the array will be intialized with this char
 *
 * Return: the address of the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = malloc(size);

	if (ptr == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
