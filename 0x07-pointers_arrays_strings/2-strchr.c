#include"main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @c: the occurrence of the character
 * @s: the string
 *
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i != '\0'; i++)
	{
		s[i] = c;
	}
	return (NULL);

}
