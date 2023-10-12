#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints string.
 * @separator: string to separate the strings
 * @n: number of strings
 * Return: noting.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *c;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(list, char *);
		if (c != NULL)
		{
			printf("%s", c);
			if ((n - i) != 1 && separator != NULL)
				printf("%s", separator);
		}
		else
		{
			printf("(nil)");
			if ((n - i) != 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
}
