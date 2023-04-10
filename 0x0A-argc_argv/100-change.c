#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the minimum number of coins to make change for
 * an amount of money
 *
 * @argc: the number of argumnts
 * @argv: an array of string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int coins, rem;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (argv[i] < 0)
		{
			printf("0\n");
		}
		else
		{
			coins = atoi(argv[1]) / 25;
			rem = atoi(argv[1]) % 25;
			if (rem)
			{
				coins += rem / 10;
				rem %= 10;
				if (rem)
				{
					coins += rem / 5;
					rem %= 5;
					if (rem)
					{
						coins += rem / 2;
						rem %= 2;
						if (rem)
						{
							coins++;
						}
					}
				}
			}
		}
	}
	printf("%d\n", coins);
	return (0);
}
