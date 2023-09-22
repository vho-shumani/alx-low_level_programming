#include "main.h"
/**
*_memcpy - function copies n bytes from memory area src to memory area dest.
*@dest: memory area where bytes are copied onto.
*@src: source where bytes are copied from
*@n: number of bytes to be copied.
*
*
*Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
