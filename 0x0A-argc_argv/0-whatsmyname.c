#include <stdio.h>

/**
 * main - it's function to print the name of the program
 *
 * @argv: the array of the string
 * @argc: the length of the argument command
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("the name of the program is \"%s\".\n", argv[0]);
	return (0);
}
