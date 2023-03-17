#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0
 */
int main(void)
{
	char *hexa = "abcdef";
	int i;

	for (i = 0; i < 10; i++)
		putchar(48 + i);
	for (i = 0; i < 6; i++)
		putchar(hexa[i]);
	putchar('\n');
	return (0);
}
