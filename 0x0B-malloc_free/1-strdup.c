#include "main.h"
#include <stdlib.h>
/**
*_strdup - function returns a pointer to a new string which is a duplicate of.
*@str: string
*
*Return: pointer to the duplicated string.
*/
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	ptr = (char *) malloc(sizeof(char) * len);
	if (str == NULL || ptr == NULL)
	{
		return NULL;
	}
	str = str - len;
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	return ptr;
	free(ptr);
}	
