#include"main.h"
#include<ctype.h>

/**
 * _isalpha - prints alphabet
 *
 * @c: checks input of function
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
		return (0);
	else
		return (1);
}
