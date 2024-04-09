#include "search_algos.h"
/**
 * binary_search - searches for value in sorted array.
 * @array: array to search for value.
 * @size: size of the array.
 * @value: value to search for.
 * Return: index of the value(success0, -1(fail).
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, i, start = 0, end = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
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
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (-1);
}
