#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints out the different sizes of the different types.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long x;
	long long int l;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(x));
	printf("Size of a long long int: %d byte(s)\n", sizeof(l));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
