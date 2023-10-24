#include "lists.h"
/**
 * print_listint - prints a listint_t linked list.
 * @head: linked list.
 * Return: number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t num_node = 0;
	const listint_t *tmp = head;

	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
		num_node++;
		if (tmp == head)
		{
			exit(98);
		}
	}
	return (num_node);
}
