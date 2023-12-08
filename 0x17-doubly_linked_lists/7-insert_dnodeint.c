#include "lists.h"
/**
*dlistint_length - return the number of elements in a list.
*@h: pointer to the linked list.
*Return: number of elements.
*/
unsigned int dlistint_length(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	unsigned int count = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
/**
*insert_dnodeint_at_index - inserts a new node at a given position.
*@h: pointer to linked list.
*@idx: index to insert new node.
*@n: integer value for new node.
*Return: pointer to new node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || dlistint_length(tmp) < idx)
	{
		return (NULL);
	}
	new->n = n;
	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next = new;
			if (new->next != NULL)
			{
				tmp = new->next;
				tmp->prev = new;
			}
			break;
		}
		tmp = tmp->next;
		i++;
	}
	return (new);
}
