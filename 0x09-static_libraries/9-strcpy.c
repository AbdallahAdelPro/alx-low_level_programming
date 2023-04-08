#include"main.h"
#include<unistd.h>

/**
 * _strcpy - copy a string
 *
 * @dest: the destination
 * @src: thr source
 *
 * Return: dest, the coppied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
	} while (src[i++] != '\0');
	return (dest);
}
