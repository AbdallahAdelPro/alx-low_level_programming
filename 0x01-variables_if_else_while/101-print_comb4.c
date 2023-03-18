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
	int k;
	int start_i;
	int start_j;
	int start_k;

	start_i = 2;
	start_j = 1;
	start_k = 0;
	for (k = start_k; k < 8; k++)
	{
		for (j = start_j; j < 9; j++)
		{
			for (i = start_i; i < 10; i++)
			{
				if (i == j)
					continue;
				putchar(48 + k);
				putchar(48 + j);
				putchar(48 + i);
				if (i == 9 && k == 7 && j == 8)
					continue;
				putchar(',');
				putchar(' ');
			}
			start_i++;
		}
		start_j++;
		start_i = start_j + 1;
	}
	putchar('\n');
	return (0);
}
