#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int n0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n0 = n % 10;
	printf("Last digit of %d is %d and ", n, n0);
	if (n0 > 5)
		printf("is greater than 5\n");
	else if (n0 == 0)
		printf("is 0\n");
	else
		printf("is less than 6 and not 0\n");
	return (0);
}
