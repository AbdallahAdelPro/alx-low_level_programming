#include"main.h"
#include<unistd.h>

/**
 * puts_half - print a string
 *
 * @str: the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	char c = str[i];
	int n;

	while (c != '\0')
	{
		i++;
		c = str[i];
	}
	if (i % 2 == 1)
		n = (i - 1) / 2;
	else
		n = i / 2;
	while (n > 0)
	{
		c = str[i - n];
		write(1, &c, 1);
		n--;
	}
	c = '\n';
	write(1, &c, 1);
}
