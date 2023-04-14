#include"main.h"

/**
 * string_nconcat - a function that concatenates 2 string
 *
 * @s1: 1st string
 * @s2: 2nd string
 * @n: bytes to be concatenated from s2
 *
 * Return: Address of a new allocated place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n > j)
		n = j;
	ptr = malloc(sizeof(char) * i + n + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[i + n] = '\0';
	for (--n; n + 1 > 0; n--)
		ptr[i + n] = s2[n];
	for (--i; i > -1 ; i--)
		ptr[i] = s1[i];
	return (ptr);
}
