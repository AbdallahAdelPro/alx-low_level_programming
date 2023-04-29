#include"lists.h"

/**
 * add_nodeint_end - function that adds new node at the end of the list
 *
 * @head: pointer pointes to the first node
 * @n: integer that added to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	h = *head;
	if (h == NULL)
	{
		*head = new;
	}
	else
	{

	while (h->next != NULL)
	{
		h = h->next;
	}

	h->next = new;
	}

	return (*head);

}
