#include "lists.h"
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
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp = *head, *holder= *head;
    unsigned int i = 0;

    if (tmp == NULL)
    {
        return (-1);
    }

    if (index == 0)
    {
        if (tmp->next != NULL)
        {
            (*head) = (*head)->next;
            (*head)->prev = NULL;
        }
        free(tmp);
        return (1);
    }
    while (tmp != NULL)
    {
        if (i == index)
        {
            holder = holder->next;
            holder->prev = tmp->prev;
            free(tmp);
            tmp = holder->prev;
            tmp->next = holder;
            return (1);
        }
        holder = holder->next;
        tmp = tmp->next;
        i++;
    }
    return (-1);
}