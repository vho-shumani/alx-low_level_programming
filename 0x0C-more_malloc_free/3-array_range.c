#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum integer.
 * @max: maximum integer.
 *
 * Return: pointer to newly created array.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
