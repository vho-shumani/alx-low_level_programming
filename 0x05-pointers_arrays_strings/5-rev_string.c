#include "main.h"
#include <string.h>
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
*rev_string - changes a string in reverse.
*@s: the string.
*
*Return: void.
*/
void rev_string(char *s)
{
	int i = 0;
	int u = 0;
	int len = _strlen(s);

	char x[_strlen(s)];		
	int a = len - 1;

	while (i <= a)
	{
		x[i] = s[a - i];
		i++;
	}
	while (u <= a)
	{
		s[u] = x[u];
		u++;
	}
}
