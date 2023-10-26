#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: interger
 * @index: interger
 * Return: 1 (success, -1 (fail).
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (*n != 0)
	{
		*n = 1 << index ^ *n;
	}
	return (1);
}

