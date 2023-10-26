#include <stdio.h>
/**
 * print_binary - prints binary number.
 * @n: interger
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int x = 1;
	unsigned long int j = 0;
	char convert;

	if (n == j)
	{
	}
	if (n > j)
	{
		print_binary(n >> 1);
		j = n & x;
		convert = j + '0';
		putchar(convert);
	}
}

