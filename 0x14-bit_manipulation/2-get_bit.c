#include <stdio.h>
#include "main.h"
/**
 * _print_binary - Prints a binary value
 * @i: integer
 * Return: 0 always a success
 */
int _print_binary(unsigned long int i)
{
	int count = 1;
	unsigned long int x = 0;

	if (i == x)
	{
		return (0);
	}
	else
	{
		count += _print_binary(i / 2);
	}
	return (count);
}
/**
 * get_bit - eturns the value of a bit at a given index.
 * @n: integer
 * @index:interger
 * Return: value of a bit at a given index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1;
	unsigned int count = 0, check = _print_binary(n);
	int result;

	if (check < index)
	{
		return (-1);
	}
	while (count <= index)
	{
		if (count == index)
		{
			if ((n & x) == 0)
			{
				result = 0;
			}
			else
			{
				result = 1;
			}
		}
		n = n >> 1;
		count++;
	}
	return (result);
}
