#include "main.h"
#include <stdio.h>
/**
 * _pow - calculate two raised to the power y.
 * @y: interger
 * Return: result of 2 raised to y.
 */
unsigned int _pow(unsigned int y)
{
	unsigned int i, sum = 1;

	for (i = 0; i < y; i++)
	{
		sum *= 2;
	}
	return (sum);
}
/**
 * _strlen - determine length of a string.
 * @b: string
 * Return: length of the string.
 */
unsigned int _strlen(const char *b)
{
	char *c = (char *)b;
	unsigned int count = 0;

	while (*c != '\0')
	{
		count++;
		c++;
	}
	return (count);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string
 * Return: converted number (success), 0 (fail).
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = _strlen(b) - 1;
	unsigned int sum = 0, i;
	unsigned int zero = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; count >= zero && b[i] != '\0'; i++, count--)
	{
		if (b[i] == '1')
		{
			sum += _pow(count);
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}
	return (sum);
}
