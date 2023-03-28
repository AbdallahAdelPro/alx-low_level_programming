#include"main.h"
#include<unistd.h>

/**
 * print_rev - print a string reversed
 *
 * @s: the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	char c = s[i];

	while (c != '\0')
	{
		i++;
		c = s[i];
	}
	c = s[--i];
	while (i != -1)
	{
		write(1, &c, 1);
		i--;
		c = s[i];
	}
	c = '\n';
	write(1, &c, 1);
}
