#include "main.h"
/**
*more_numbers -prints numbers 0 to 14 10 times.
*
*Return: void.
*/
void more_numbers(void)
{
	int times = 0;

	while (times < 10)
	{
		int i = 0;

		while (i <= 14)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;
		}
	_putchar('\n');
	times++;
	}
}
