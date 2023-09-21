#include "main.h"
/**
*reverse_array - it reverses array of intergers.
*@a: array
*@n: the size of the array.
*
*
*Return: void
*/
void reverse_array(int *a, int n)
{
	int *ptr = a;
	int x;
	int i = 0;
	int diff = n - 1;

	while (i < n)
	{
		x = *(ptr + i);
		*(ptr + i) = *(ptr + diff);
		*(ptr + diff) = x;
		n--;
		diff--;
		i++;
	}
}
