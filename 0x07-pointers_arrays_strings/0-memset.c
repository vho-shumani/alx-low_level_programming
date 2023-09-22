#include "main.h"
/**
*_memset - fills the first n bytes of memory area s.
*@s: address of memory to fill.
*@b: value to be filled.
*@n: number of bytes to be filled.
*
*
*Return: pointer to memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char **ptr;

	ptr = &s;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (*ptr);
}
