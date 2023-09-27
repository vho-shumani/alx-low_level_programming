#include "main.h"
/**
*factorial - determine the factorial of a number.
*@n: interger
*
*
*Return: factorial number.
*/
int factorial(int n)
{
	int len;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		len = factorial(n - 1) * n;
	}
	return (len);
}
