#include "main.h"
/**
*print_diagonal - print diagonal lines on the terminal..
*@n: it is the number of time \ should be printed.
*
*
*Return: void
*/
void print_diagonal(int n)
{
	int a = 1;

	while (a <= n)
	{
		int i = 1;

		while (i <= a)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}

}
