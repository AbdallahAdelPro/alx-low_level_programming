#include"main.h"

/**
 * _strspn - the number of bytes in the initial segment of @s which consist
 * only of bytes from @accept
 *
 * @s: consist only of bytes from accept
 * @accept: the bytes i research
 *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && s[i] != accept[j]; j++)
			;
		if (accept[j] == '\0')
			break;

	}
	return (i);



}
