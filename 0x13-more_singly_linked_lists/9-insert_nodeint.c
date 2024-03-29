#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - determines the number of element in a list.
 * @h: list
 * Return: the number of elements in list.
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: list of nodes.
 * @idx: index of the list where the new node.
 * @n: node data.
 * Return: address of the new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *new = malloc(sizeof(listint_t));
	unsigned int i, num = listint_len(*head);

	if (num < idx)
	{
		return (NULL);
	}
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
