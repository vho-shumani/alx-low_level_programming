#include "main.h"
#include <stdlib.h>
/**
*alloc_grid -  returns a pointer to a 2 dimensional array of integers.
*@width: the width of array.
*@height: height of array.
*
*Return: point to a 2 dimensional array (success).
*/
int **alloc_grid(int width, int height)
{
	int a, b, c;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **) malloc(sizeof(int *) * (height));
	for (a = 0; a < height; a++)
	{
		ptr[a] = (int *) malloc(sizeof(int) * (width));
	}
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			ptr[b][c] = 0;
		}
	}
	return (ptr);
}
