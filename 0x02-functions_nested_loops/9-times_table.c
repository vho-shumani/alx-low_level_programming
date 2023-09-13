#include "main.h"
/**
*times_table - prints the times table of 9.
*
*
*Return: returns void.
*/
void times_table(void)
{
	int a = 0;

	while (a <= 9)
	{
		int b = 0;

		while (b <= 9)
	{
		int total = a * b;

		if (total < 10)
		{
			if (b != 0)
			{
				_putchar(' ');
			}
			_putchar(total + '0');
			b++;
		}
		else
		{
			_putchar((total / 10) + '0');
			_putchar((total % 10) + '0');
			b++;
		}
		if (b < 10)
		{
			_putchar(',');
			_putchar(' ');
		}

	}
	_putchar('\n');
	a++;
	}
}
