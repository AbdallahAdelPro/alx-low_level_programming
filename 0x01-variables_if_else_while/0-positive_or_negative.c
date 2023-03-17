#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main function
 * the code of random num
 * if the num < 0
 * print nigative
 * if num == 0
 * print 0
 * if num > 0
 * print positive
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
