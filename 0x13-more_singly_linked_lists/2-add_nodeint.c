#include"lists.h"

/**
 * add_nodeint - function that adds a node in the biginning of the list
 *
 * @head: pointer to the first node
 * @n: integer to add in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	new->n = n;
	*head = new;
	return (*head);
}
