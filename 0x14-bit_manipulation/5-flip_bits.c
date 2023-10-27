#include <stdio.h>
#include "main.h"
/**
 * flip_bits - determine number of bits you would need to flip number.
 * @n: interger
 * @m:interger
 * Return: number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int i = (n ^ m);

	while (i > 0)
	{
		i = i & (i - 1);
		count++;
	}
	return (count);
}
