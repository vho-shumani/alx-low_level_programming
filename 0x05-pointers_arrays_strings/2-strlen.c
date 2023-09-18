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
