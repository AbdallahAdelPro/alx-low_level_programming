#include"lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{

	listint_t *head = h;
	int count = 0;

	while (head != NULL)
	{
	printf("%d\n", head->n);
	head = head->next;
	count++;
	}

	return (count);
}
