#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all parameter.
 * @format: types of arguments passed.
 *Return: nothing.
 */
void print_all(const char * const format, ...)
{
	const char *format_ptr = format;
	char *i;
	va_list list;
	va_start(list, format);
	 
	while (*format_ptr != '\0')
	{
		
		switch (*format_ptr)
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				i = va_arg(list, char *);
				if (i == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", i);
				break;
		}
		format_ptr++;
		if (*format_ptr != '\0' && (*format_ptr == 'c' || *format_ptr == 'i' || *format_ptr == 'f' || *format_ptr == 's'))
			printf(", ");
	}
	va_end(list);
	printf("\n");
}


