#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: point to linked list.
 * @n: integer to add.
 * Return: point of new address, or NULL (fail)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		(*head) = new;
		new->next = NULL;
		new->n = n;
	}
	else
	{
		(*head)->prev = new;
		new->next = *head;
		new->n = n;
		*head = new;
	}
	return (*head);
}
