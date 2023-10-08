#include "main.h"
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: size of an array.
 * @size: size of elements.
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		((char *)ptr)[i] = 0;
	}
	return (ptr);
}
