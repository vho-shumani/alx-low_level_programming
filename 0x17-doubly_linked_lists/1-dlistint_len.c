#include "lists.h"
/**
 * dlistint_len - return the number of elements.
 * @h: pointer to linked list.
 * Return: number of elements.
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return count;
}
