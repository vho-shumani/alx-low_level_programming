#include "main.h"
#include <string.h>
/**
*puts2 - prints out every other character of the string
*@str: the string.
*
*Return: void
*/
void puts2(char *str)
{
	int len = strlen(str);
	int i = 0;

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
