#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*print_array - prints n elements of an array of integers.
*@a: the array.
*@n: number of elements in array.
*
*
*Return:void.
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}
	print('\n');
}
