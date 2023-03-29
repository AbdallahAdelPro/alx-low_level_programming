#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;
	int i, j;

	for (i = 0, dest[i] != '\0', i++)
		;
	for (j = 0, src[j] != '\0', i++, j++)
	{
		dest[i] = src[j];
	}
	*dest = '\0';
	return (s);
}
