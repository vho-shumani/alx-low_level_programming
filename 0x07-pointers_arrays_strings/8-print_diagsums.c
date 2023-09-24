#include "main.h"
#include <stdio.h>
/**
*print_diagsums - prints the sum of the two diagonals.
*@a: array
*@size: size of the square.
*
*
*Return: return nothing.
*/
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	while (i < size)
	{
		sum1 += a[i * size + i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		sum2 += a[i * size + (size - 1 - i)];
		i++;
	}
	printf("%d, %d", sum1, sum2);
}
