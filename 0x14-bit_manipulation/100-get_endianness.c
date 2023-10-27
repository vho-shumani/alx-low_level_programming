#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness
 * Return: 1 (little endianness), 2 (big endianness).
*/
int get_endianness(void)
{
	int check = 1;
	char *ptr = (char *)&check;

	if (ptr[0] == 1)
		return (1);
	else
		return (0);
}
