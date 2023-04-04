#include"main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @c: the occurrence of the character
 * @s: the string
 *
 * Return: *s
 */
char *_strchr(char *s, char c)
{
        unsigned int i;

        for (i = 0; s[i] != '\0'; i++)
        {
                if (s[i] == c)
                {
			return (&s[i]);
		}
	}
	return ('\0');

}
