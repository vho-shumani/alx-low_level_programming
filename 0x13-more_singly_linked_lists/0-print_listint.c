#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print all elements of a listint_t ;ist.
 * @h: listint_t list.
 * Return: the number of nodes.
 */ 
size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		num_node++;
	}
	return (num_node);
}
