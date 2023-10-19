#include "lists.h"
/**
 *list_len - determine the number of elements in linked list.
 *@h: linked list
 *Return: number of elements in linked list.
 */
size_t list_len(const list_t *h)
{
	const list_t * temp = h;
	size_t count = 0;
		
	while (temp != NULL)
	{
		count++;
	}
	printf("%ld", count);
	return (count);
}

