#include "main.h"
/**
*_print_rev_recursion - prints string in reverse.
*@s: string
*
*
*Return: nothing.
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		s--;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
