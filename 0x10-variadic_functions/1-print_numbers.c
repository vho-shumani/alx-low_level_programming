#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints number from the parameters.
 * @separators: characters that separate the words.
 * @n: number of intergers passed.
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator != NULL && n != 0)
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));
			if ((n - i) != 1)
				printf("%s", separator);
		}
		printf("\n");
	}
}



