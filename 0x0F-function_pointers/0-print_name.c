#include"main.h"

/**
 * print_name - print name
 *
 * @name: the pointer that point to the name
 * @f: pointer that point to the function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
