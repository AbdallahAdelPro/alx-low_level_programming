#include<stdio.h>

/**
 * main - prints a line
 * Return: 0
 */
int main(void)
{
	int C = sizeof(char);
	int I = sizeof(int);
	int LI = sizeof(long int);
	int LLI = sizeof(long long int);
	int F = sizeof(float);

	printf("Size of a char: %d byte(s)\n", C);
	printf("Size of an int: %d byte(s)\n", I);
	printf("Size of a long int: %d byte(s)\n", LI);
	printf("Size of a long long int: %d byte(s)\n", LLI);
	printf("Size of a float: %d byte(s)\n", F);
	return (0);
}
