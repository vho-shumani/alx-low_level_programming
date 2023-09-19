#include "main.h"
/**
*_strlen - return the total length of a string.
*@s: the string.
*
*
*Return: returns the length of the string.
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
*puts2 - prints out every other character of the string
*@str: the string.
*
*Return: void
*/
void puts2(char *str)
{
	int len = _strlen(str);
	int i = 0;

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
