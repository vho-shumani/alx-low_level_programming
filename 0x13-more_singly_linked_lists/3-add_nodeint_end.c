#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->n = n;
    if (*head == NULL)
    {
        *head = new;
        new->next = NULL;
    }
    else
    {
        listint_t *tmp = *head;

        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new;
        new->next = NULL;
    }
    return (new);
}
