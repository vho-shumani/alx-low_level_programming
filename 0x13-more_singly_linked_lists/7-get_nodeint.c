#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: list
 * @index: is the index of the node, starting at 0.
 * Return: the nth node of a listint_t linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = head;

	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		return (NULL);
	}
	return (tmp);
}
