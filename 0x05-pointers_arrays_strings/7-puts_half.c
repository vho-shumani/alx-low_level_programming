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
*puts_half - prints out only half of the string.
*@str: the string
*
*Return:void
*/
void puts_half(char *str)
{
	int len = _strlen(str);
	int n = (len / 2);

	if (len % 2 != 0)
	{
		int n1 = n + 1;

		while (n1 < len)
		{
			_putchar(str[n1]);
			n1++;
		}

	}
	else
	{
		while (n < len)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
