#include "main.h"
#include <string.h>
/**
*_strlen - returns length of the string.
*@s: the string.
*
*Return: length of string.
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
*print_rev - prints string in reverse.
*@s: the string
*
*Return: void
*/

void print_rev(char *s)
{
	int len = _strlen(s);
	int i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
