#include"main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int row = 0;
	int column;
	int elem;

	while (row < 10)
	{
		column = 0;
		while (column < 10)
		{
			elem = row * column;
			if (column > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (elem / 10 == 0)
					_putchar(' ');
				else
					_putchar(elem / 10 + '0');
			}
			_putchar(elem % 10 + '0');
			column++;
		}
		_putchar('\n');
		row++;
	}
}
