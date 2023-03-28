#include"main.h"
#include<unistd.h>

/**
 * rev_string - print a string reversed
 *
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	char c = s[i];
	char tmp;
	int lastIndex;

	while (c != '\0')
	{
		i++;
		c = s[i];
	}
	lastIndex = --i;
	while (i  >= (lastIndex + 1) / 2)
	{
		tmp = s[i];
		s[i] = s[lastIndex - i];
		s[lastIndex - i] = tmp;
		i--;
	}
}
