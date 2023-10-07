#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: amount of bytes to be allocated.
 *
 * Return: pointer to memory(success).
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
