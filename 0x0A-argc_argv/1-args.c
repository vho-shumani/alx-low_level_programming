#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*@argc: number of elements in array.
*@argv: array
*
*
*Return: always success(0)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
