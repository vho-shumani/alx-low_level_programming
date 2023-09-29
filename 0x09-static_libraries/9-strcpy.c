#include "main.h"
/**
*_strcpy -copies a string to anoter array.
*@dest: is the array
*@src: is the string
*
*
*Return: returns the array.
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i <= src['\0'])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
