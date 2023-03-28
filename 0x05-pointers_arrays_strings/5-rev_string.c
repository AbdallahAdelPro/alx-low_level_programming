#include"main.h"
#include<unistd.h>

/**
 * puts2 - print a string
 *
 * @str: the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	char c = str[i];

	while (c != '\0')
	{
		if (i % 2 == 0)
			write(1, &c, 1);
		i++;
		c = str[i];
	}
	c = '\n';
	write(1, &c, 1);
}
