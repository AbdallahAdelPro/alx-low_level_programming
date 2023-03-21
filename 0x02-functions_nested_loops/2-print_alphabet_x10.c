#include"main.h"

/**
 * print_alphabet_x10 - prints alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char *sentence = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j = 0;

	while (j < 10)
	{
		i = 0;
		while (i < 26)
		{
			_putchar(sentence[i]);
			i++;
		}
		_putchar('\n');
	j++;
	}
}
