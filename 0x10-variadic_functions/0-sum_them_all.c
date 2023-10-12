#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - return the sum of all parameters.
 * @n: constant interger
 *Return: sum of parameter (success), 0 (fail).
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	unsigned int sum = 0;
	va_list parameters;

	if (n == 0)
	{
		return (0);
	}
	va_start(parameters, n);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(parameters, int);
	}
	va_end(parameters);
	return (sum);
}
