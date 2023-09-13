#include "main.h"
/**
*print_last_digit - it print the last digit of character c.
*@c: the character to be print.
*
*
*Return: the last number of c.
*/
int print_last_digit(int c)
{
	int result;

	if (c < 0)
	{
		result = (c * (-1)) % 10;
		_putchar(result + '0');
	}
	else
	{
		result = c % 10;
		_putchar(result + '0');
	}
	return (result);
}
