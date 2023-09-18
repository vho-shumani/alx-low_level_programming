#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*_puts - print the inputed string.
*@str: the string.
*
*
*Return: void.
*/

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
