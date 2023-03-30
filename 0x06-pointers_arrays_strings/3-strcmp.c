#include"main.h"

/**
 * _strcmp - compare two strings and print 0 if the same ,
 * < 0 if less than , > 0 if greater than
 *
 * @s1: the destination of the of the string
 * @s2: the source of the string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (s1 == s2)
		return (0);
	else
		return (s1 - s2);
}
