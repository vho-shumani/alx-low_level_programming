#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
/**
 * get_op_func - selects the correct function to perform the operation.
 * @s: arithmetic operator.
 *
 * Return: returns a pointer to the function that corresponds to the s.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
		{
			break;
		}
		i++;
	}
	return (ops[i].f);
}
