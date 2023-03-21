#include"main.h"
#include<ctype.h>

/**
 * _islower - prints alphabet
 *
 * @c: checks input of function
 *
 * Return: 0
 */
int _islower(int c)
{
	if (islower(c) == 0)
		return (0);
	else
		return (1);
}
