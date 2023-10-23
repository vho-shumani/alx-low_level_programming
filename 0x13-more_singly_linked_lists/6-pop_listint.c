#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: list
 * Return: head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp = (*head)->next;

	if (*head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	free(*head);
	*head = tmp;
	return (i);
}
