#include "main.h"
/**
*_pow_recursion - determines the value of x raised to the power of y.
*@x: base interger value.
*@y: exponential interger value.
*
*
*Return: interger value.
*/
int _pow_recursion(int x, int y)
{
	int len;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		len = _pow_recursion(x, y - 1) * x;
	}
	return (len);
}
