#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints number from the parameters.
 * @separator: characters that separate the words.
 * @n: number of intergers passed.
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;


	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if ((n - i) != 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}



