#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers.
 * @array: array for search.
 * @size: size of the array.
 * @value: value to search for.
 * Return: index of the value or -1 if not present.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = (size_t)sqrt(size);
	size_t start = 0, end = jump_step;

	if (array == NULL || size == 0)
		return (-1);

	while (start <= size)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (array[end] >= value || start == size - 1)
			break;
		start = end;
		end += jump_step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	while (array[start] <= value && start <= size)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}
	return (-1);
}
