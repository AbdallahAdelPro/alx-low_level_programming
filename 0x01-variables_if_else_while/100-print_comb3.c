#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int start_i;
	int start_j;

	start_i = 1;
	start_j = 0;
	for (j = start_j; j < 9; j++)
	{
		for (i = start_i; i < 10; i++)
		{
			putchar(48 + j);
			putchar(48 + i);
			if (i == 9 && j == 8)
				continue;
			putchar(',');
			putchar(' ');
		}
		start_i++;
	}
	putchar('\n');
	return (0);
}
