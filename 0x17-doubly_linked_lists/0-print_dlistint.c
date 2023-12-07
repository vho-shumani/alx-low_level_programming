#include "lists.h"
/**
* print_dlistint - print all elements in a linked list.
* @h: pointer to the linked list.
* Return: number of elements.
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
