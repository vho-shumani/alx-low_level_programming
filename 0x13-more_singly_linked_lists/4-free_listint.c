#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free a listint list
 * @head: list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
    listint_t *tmp;
    while (head != NULL)
    {
        tmp = head;
        head = head->next;
	free(tmp);
    }
}
