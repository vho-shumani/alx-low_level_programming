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
	int len = _strlen(str);
	int i = 0;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
