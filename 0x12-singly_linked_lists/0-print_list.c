#include "lists.h"
/**
 * print_list - prints all the elements of the list_t list
 * @h: list_t list
 * Return: the number of nodes (success).
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t num = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
			temp = temp->next;
			num++;
		}
		else
		{
			printf("[%d] ", temp->len);
			printf("%s\n", temp->str);
			temp = temp->next;
			num++;
		}
	}
	return (num);
}
