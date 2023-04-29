#include"lists.h"

/**
 * listint_len - function that prints the number of elements
 *
 * @h: the head pointer
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
	}
	return (count);
}
