#include"main.h"
#include<ctype.h>

/**
 * _isdigit - prints alphabet
 *
 * @c: checks input of function
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (isdigit(c) == 0)
		return (0);
	else
		return (1);
}
