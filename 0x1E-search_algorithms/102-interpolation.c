#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers.
 * @array: sorted array to search for value.
 * @size: size of the array.
 * @value: value to find in array.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	while (low < high)
	{
		pos = low + (value - array[low]) * (high - low) / (array[high] - array[low]);
		if (pos <= high)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{	
			printf("Value checked array[%ld] is out of range\n", pos);
			return -1;
		}	
		if (array[pos] == value)
		{
			return (pos);
		}
		else if (array[pos] > value)
			high = pos - 1;
		else 
			low = pos + 1;
	}
	return (-1);
}

