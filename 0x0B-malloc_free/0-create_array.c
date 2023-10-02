#include "main.h"
#include <stdlib.h>
/**
*create_array - creates and initializes an array.
*@size: the size of the array.
*@c: characters of array.
*
*Return: pointer to array(success)
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || *ptr == '\0')
	{
		return ('\0');
	}
	while(i < size) 
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
	free(ptr);
}
