#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0
 */
int main(void)
{
	char *alpha_revers = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
		putchar(alpha_revers[i]);
	putchar('\n');
	return (0);
}
