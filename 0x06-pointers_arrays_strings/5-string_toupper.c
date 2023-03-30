#include"main.h"

/**
 * string_toupper - change all the lower case to the upper case
 *
 * @s: string
 *
 * Return: char
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] -= 32;
	}
	return (s);
}
