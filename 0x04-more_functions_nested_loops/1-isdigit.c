#include "main.h"
/**
*_isdigit - chechks if c is a digit
*@c: character to be checked.
*
*Return: 1 if is digit or 0 if its not.
*/
int _isdigit(int c)
{
	int a = '0';
	int z = '9';
	int result = 0;

	while (a <= z)
	{
		if (a == c)
		{
			result = 1;
		}
		a++;
	}
	return (result);
}
