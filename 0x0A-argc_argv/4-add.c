#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the main function
 *
 * @argc: the length of the argument command
 * @argv: an array of strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				else
				{
					add += atoi(argv[i]);
				}
			}
		}
		printf("%d\n", add);
	}
	return (0);
}
