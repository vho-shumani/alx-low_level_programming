/**
 * int_index - searches for an integer.
 * @array: array
 * @size: size of array.
 * @cmp: function pointer.
 *
 * Return: index of interger (success), -1 (fail).
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (0);
}
