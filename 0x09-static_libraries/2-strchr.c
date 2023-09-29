#include "main.h"
/**
*_strchr - first occurrence of the character c in the string.
*@s: the string.
*@c: character to be matched.
*
*
*Return: point of char type.
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
