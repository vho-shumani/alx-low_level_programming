#include "lists.h"
/**
*ins
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new; 
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
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
	if (tmp == NULL)
		return (NULL);
	return (*h);
}
