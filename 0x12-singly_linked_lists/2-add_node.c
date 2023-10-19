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
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: list
 * @str: string
 * Return: address of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
