#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main Entry point
 * @argc: number of argument
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a, b, (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	ptr(a, b);
	return (0);
}
