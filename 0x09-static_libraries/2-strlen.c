#include"main.h"

/**
 * _strlen - calculates the string length
 *
 * @s: A pointer to the string
 *
 * Return: integer (the length of the string)
 */
int _strlen(char *s)
{
	int i = 0;
	char c = s[i];

	while (c != '\0')
	{
		i++;
		c = s[i];
	}
	return (i);
}
