#include"main.h"
#include<ctype.h>

/**
 * _isupper - prints alphabet
 *
 * @c: checks input of function
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (isupper(c) == 0)
		return (0);
	else
		return (1);
}
