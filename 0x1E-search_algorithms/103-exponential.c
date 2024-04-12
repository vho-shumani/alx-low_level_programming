#include "search_algos.h"
/**
 * searches for a value in a sorted array of intergers.
 * @array: array to search for the calue.
 * @size: size of the array.
 * @value: value to find.
 * Return: the index of the value, -1 (fail).
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 0, start, end, mid, i;

	if (array == NULL)
		return -1;
	if (array[bound] == value )
		return bound;
	else
		bound = 1;
	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	start = bound/ 2;
	if (bound >= size)
		end = size - 1;
	else
		end = bound;
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);	
	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i != end)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);

}
