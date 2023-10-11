#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter on each element.
 * @array: array.
 * @size: size of array.
 * @action: the function pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == NULL || action == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
