#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a list.
 * @head: points linked list.
 * Return:  returns the sum of all the data.
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

