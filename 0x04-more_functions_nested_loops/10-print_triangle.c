#include"main.h"

/**
 * print_triangle - print a triangle of #
 *
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int l;
	int w;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (w = size - l - 1; w > 0; w--)
			{
				_putchar(' ');
			}
			for (w = 0; w < l + 1; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
