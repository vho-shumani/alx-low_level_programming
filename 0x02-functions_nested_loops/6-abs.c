#include "main.h"
/**
*_abs - computes the absolute value of an integer.
*@c: the character to be computered.
*
*
*Return: return the absolute value.
*/

int _abs(int c)
{
	int result;

	if (c < 0)
	{
		result = c * (-1);
	}
	else
	{
		result = c * 1;
	}
	return (result);
}
