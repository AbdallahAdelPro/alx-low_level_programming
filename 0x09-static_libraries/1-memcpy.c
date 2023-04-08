#include"main.h"

/**
 * _memcpy - The _memcpy() function copies @n bytes from memory area
 * @src to memory area @dest
 *
 * @n: the number of  bytes pointed by @src
 * @src: the pointer that points to the area of memory that will be copyed
 * @dest: the destination of the copy
 *
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
