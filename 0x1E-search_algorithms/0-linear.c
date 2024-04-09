#include "search_algos.h"
/**
 * linear_search - search for value in array.
 * @array: array to do search.
 * @value: value to search.
 * @size: number of element in array.
 * Return: index of value, -1(fail).
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
