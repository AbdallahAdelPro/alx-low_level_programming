#include"main.h"

/**
 * print_last_digit - prints alphabet
 *
 * @n: a number
 *
 * Return: last digit
 **/
int print_last_digit(int n)
{
	int d0;

	d0 = n % 10;
	if (d0 < 0)
		d0 = -1 * d0;
	_putchar(d0 + '0');
	return (d0);
}
