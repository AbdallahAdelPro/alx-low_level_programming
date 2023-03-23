#include"main.h"

/**
 * print_numbers - A function that prints all digits
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
