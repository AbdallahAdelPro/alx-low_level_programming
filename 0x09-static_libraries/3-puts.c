#include"main.h"
#include<unistd.h>

/**
 * _puts - print a string
 *
 * @str: the string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;
	char c = str[i];

	while (c != '\0')
	{
		i++;
		write(1, &c, 1);
		c = str[i];
	}
	c = '\n';
	write(1, &c, 1);
}
