#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program prints out the different sizes of the different types on the computer.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	float f;

	printf("Size of a char: %lu byte(s)\n",sizeof(c));
	printf("Size of an int: %lu byte(s)\n",sizeof(i));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(i));
	printf("Size of a long long int: %lld byte(s)\n",(unsigned long long)sizeof(i));
	printf("Size of a float: %lu byte(s)\n",sizeof(f));	
	return (0);
}
