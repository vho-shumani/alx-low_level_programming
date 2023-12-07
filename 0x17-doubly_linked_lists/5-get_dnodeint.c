#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to list.
 * @index: is the index of the node, starting from 0.
 * Return: returns the nth node of a dlistint_t linked list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0, num_elem;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		num_elem++;
	}
	if (index > num_elem)
	{
		return (NULL);
	}
	tmp = head;
	for (; i < index; i++)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
