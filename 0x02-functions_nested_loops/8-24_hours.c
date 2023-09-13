#include "main.h"
/**
*jack_bauer - prints every minute of the day
*
*
*Return: void
*/
void jack_bauer(void)
{
	int a = 0;

	while (a <= 2)
	{
		int b = 0;

	while (b < 10)
	{
		int c = 0;

	while (c < 6)
	{
		int d = 0;

	while  (d < 10)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');

		if (a == 2 && b ==  3 && c == 5 && d == 9)
		{
			a = 2;
			b = 10;
			c = 6;
			d = 10;
		}
		d++;

	}
	c++;
	}
	b++;
	}
	a++;
	}
}
