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
	char p;

	for (i = 0; p != '\0'; i++)
	{
		p = s[i];
		if (p != c)
			return (&p);
	}
	return (NULL);

}
