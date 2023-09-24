#include "main.h"
/**
*_strpbrk - searches a string for any of a set of bytes.
*@s: string to be analyzed.
*@accept: characters to analyze.
*
*
*Return: return string or NULL is characters doesnt exist.
*/
char *_strpbrk(char *s, char *accept)
{
	int count = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
			return (s);
			}
			count++;
			accept++;
		}
		s++;
		accept = accept - count;
		}
		return ('\0');
}
