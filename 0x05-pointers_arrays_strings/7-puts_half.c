#include "main.h"
#include <string.h>
/**
*puts_half - prints out only half of the string.
*@str: the string
*
*Return:void
*/
void puts_half(char *str)
{
	int len = strlen(str);
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
