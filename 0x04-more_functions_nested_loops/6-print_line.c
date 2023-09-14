#include "main.h"
/**
*print_line - print the _ character for n times given.
*@n: it is the number of time _ should be printed.
*
*
*Return: void
*/
void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
