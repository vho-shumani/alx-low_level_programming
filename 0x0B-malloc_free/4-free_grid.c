#include "main.h"
#include <stdlib.h>
/**
*free_grid - frees memory of a 2D array.
*@grid: the array
*height: number of arrays.
*
*Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
} 
