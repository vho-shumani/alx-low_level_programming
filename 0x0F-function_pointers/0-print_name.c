#include <stddef.h>
#include "function_pointer.h"
/**
 * print_name - prints out a name.
 * @name: the name to print.
 * @f: function pointer.
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
