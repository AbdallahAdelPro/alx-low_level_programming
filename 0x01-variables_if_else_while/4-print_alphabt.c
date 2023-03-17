#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0
 */
int main(void)
{
	char alpha[24] = {'a', 'b', 'c', 'd', 'f', 'g'
		, 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'
		, 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i;

	for (i = 0; i < 24; i++)
		putchar(alpha[i]);
	putchar('\n');
	return (0);
}
