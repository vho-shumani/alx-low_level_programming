#include "main.h"
/**
*_strlen_recursion - determine the length of a string.
*@s: string
*
*
*Return: length of string
*/
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (0);
	}
	else if (*s != '\0')
	{
		len = _strlen_recursion(s + 1) + 1;
	}
	return (len);
}
