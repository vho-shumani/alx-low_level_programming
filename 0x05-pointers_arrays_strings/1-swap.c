#include "main.h"
/**
*swap_int - swaps the value of interger a with interger b.
*@a:is the first point.
*@b: is the second point.
*
*
*Return: void
*/
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
