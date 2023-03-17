#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int num[10] = {0,1,2,3,4,5,6,7,8,9};

	for (i=0; i<10; i++)
		putchar(num[i]);
	putchar('\n');
	return (0);
}
