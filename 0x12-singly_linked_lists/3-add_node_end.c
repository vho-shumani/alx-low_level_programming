#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - determine the length of string.
 * @str: string
 * Return: length of string.
 */
int _strlen(const char *str)
{
	unsigned int count = 0, i;

	for (i = 0 ; str[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
/**
 * add_node_end - adds a new node at the last of a list_t list.
 * @head: list
 * @str: string
 * Return: address of new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		list_t *tail = *head;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new;
		new->next = NULL;
	}
	return (new);
}
