#include "main.h"
/**
*print_numbers - prints numbers from 0 t0 9.
*
*Return: void.
*/
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
	}
	putchar('\n')
}
