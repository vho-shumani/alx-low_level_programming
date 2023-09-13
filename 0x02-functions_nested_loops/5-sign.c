#include "main.h"
/**
*print_sign - determine whethet character n is greater, equal or less then 0.
*@n: ther character that will be determined.
*
*
*Return: returns either -1,0 or 1 determing on character c.
*/
int print_sign(int n)
{
	int result = 0;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else
	{
		result = -1;
		_putchar('-');
	}
	return (result);
}
