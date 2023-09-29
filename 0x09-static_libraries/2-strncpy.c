#include "main.h"
/**
*_strncpy - copies a string from one variable to another.
*@dest: first string
*@src: string to be copied
*@n: number of characters to be copied.
*
*
*Return: returns dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	while (i < n)
	{
		*ptr = '\0';
		ptr++;
		i++;
	}
	return (dest);
}
