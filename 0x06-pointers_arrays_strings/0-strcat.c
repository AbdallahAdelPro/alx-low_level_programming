#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcat(char *dest, char *src);
{
	char *s = dest;

	for (dest = 0, *dest != '\0', dest++)
		;
	for (src = 0, *src != '\0', src++)
	{
		*dest = *scr;
		dest++;
	}
	*dest = '\0';
	return (s);
}
