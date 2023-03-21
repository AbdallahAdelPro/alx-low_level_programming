#include"main.h"

/**
 * main - prints a line
 * Return: 0
 */
int main(void)
{
	char *sentence = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(sentence[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
