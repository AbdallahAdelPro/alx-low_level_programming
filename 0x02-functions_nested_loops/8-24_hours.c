#include"main.h"
/**
 * jack_bauer - a function to print time
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
