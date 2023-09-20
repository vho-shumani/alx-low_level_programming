#include "main.h"
#include <stdio.h>
/**
*_strncat - it appends src string onto dest.
*@dest: first string
*@src: second string
*@n: number of character in src
*
*
*Return: return the appended string.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (i < n && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
        }
	ptr = '\0'
	return (dest);
}
