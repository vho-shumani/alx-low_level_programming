#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: print all single digits of base 10 starting with 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
