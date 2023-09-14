#include "main.h"
/**
*print_square - print # character in the form of a square.
*@n: size of the square.
*
*
*Return:void
*/
void print_square(int n)
{
	int a = 1;

	if (n <= 0)
	_putchar('\n');
	else
	{
	while (a <= n)
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		a++;
	}
	}
}
