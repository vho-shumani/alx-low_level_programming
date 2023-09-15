#include "main.h"
/**
*print_triangle - draws a tringle with the specified size.
*@size: specify the size of the triangle.
*
*
*Return: returns void.
*/
void print_triangle(int size)
{
	int a = 1;

	while (a <= size)
	{
		int b = 1;
		int c = a;

		while (c < size)
		{
			_putchar('.');
			c++;
		}
		while (b <= a)
		{
			_putchar('#');
			b++;
		}
	_putchar('\n');
	a++;
	}
	if (size <= 0)
		_putchar('\n');
}
