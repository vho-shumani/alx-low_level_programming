#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: interger
 * @index: interger
 * Return: 1 (success, -1 (fail).
*/
int set_bit(unsigned long int *n, unsigned int index)
{
    *n = 1 << index | *n;
    return(1);
}