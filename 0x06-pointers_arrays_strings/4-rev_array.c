#include "main.h"
/**
*reverse_array - it reverses array of intergers.
*@a: array
*@n the size of the array.
*
*
*Return: void
*/
void reverse_array(int *a, int n)
{
	int s[100];
	int i = 0;
	int x = 0;

	while(i < n)
	{
		s[i] = a[(n-1) - i];
		i++;
	}

	while (x < n)
	{
		a[x] = s[x];
		x++;
	}
}
