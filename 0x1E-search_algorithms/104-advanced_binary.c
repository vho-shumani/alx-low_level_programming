#include "search_algos.h"
/**
 * recursive_binary - recursively searches for a value in sorted array.
 * @array: pointer first element of the sorted array.
 * @start: first index of the subarray.
 * @end: last index of the subarray.
 * @value: value to search for.
 * Return: index where value is located, or -1 (fail).
*/
int recursive_binary(int *array, size_t start, size_t end, int value)
{
	size_t i, mid = (start + end) / 2;

	if (start > end)
		return (-1);
	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
		else
			printf("\n");
	}
	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		end = mid;
	}
	else if (array[mid] < value)
		start = mid + 1;
	else
		end = mid - 1;
	return (recursive_binary(array, start, end, value));
}
/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: index where value is located, -1 (fail).
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	return (recursive_binary(array, 0, size - 1, value));
}
