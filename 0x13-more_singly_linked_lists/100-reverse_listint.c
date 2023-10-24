#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: linked list
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = *head, *next = *head;

	if (*head == NULL)
	{
		return (NULL);
	}
	tmp = tmp->next;
	(*head)->next = NULL;
	while (tmp != NULL)
	{
		next = tmp->next;
		tmp->next = *head;
		*head = tmp;
		tmp = next;
	}
	return (*head);
}
