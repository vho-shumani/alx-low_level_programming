#include "main.h"
/**
*puts2 - prints out every other character of the string
*@str: the string.
*
*Return: void
*/
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
