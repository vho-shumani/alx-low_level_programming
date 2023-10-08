#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer of the previous allocated memory.
 * @old_size: size of the previous memory.
 * @new_size: size of the new memory block.
 *
 * Return: pointer of the new memory allocation (success), NULL (fail).
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr1 = malloc(new_size);
	if (ptr != NULL || ptr1 != NULL)
	{
		for (i = 0; i < new_size; i++)
		{
			((char *)ptr1)[i] = ((char *)ptr)[i];
		}
	}
	free(ptr);
	return (ptr1);
}
