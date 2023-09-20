#include "main.h"
/**
*_strcat - concatenates two string
*@dest: the string which the other string is added onto.
*@src: the source string
*
*
*Return: return string.
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	int i = 0;
	int len = 0;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	ptr = '\0';
	while (*dest != '\0')
	{
		len++;
		dest++;
	}
	while (i < len)
	{
		_putchar(dest[i]);
		i++;
	}
	return (dest);
}
