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
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: linked list.
 * @index: index of node to delete.
 * Return: 1 (success), -1 (fail).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, num = listint_len(*head);
	listint_t *tmp = *head, *del = *head;

	if (num == 0 || num <= index)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		del = del->next;
		if (i < index - 1)
		{
			tmp = tmp->next;
		}
	}
	tmp->next = del->next;
	free(del);
	return (1);
}
