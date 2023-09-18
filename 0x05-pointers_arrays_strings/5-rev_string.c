#include "main.h"
#include <string.h>
/**
*rev_string - returns a string in reverse.
*@s: the string.
*
*Return: void.
*/
void rev(char *s)
{
	int len = strlen(s);
	int i = len - 1;
	char empty[];

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
