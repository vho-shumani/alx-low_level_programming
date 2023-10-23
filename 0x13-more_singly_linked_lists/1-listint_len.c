#include "lists.h"
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
