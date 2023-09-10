
#include <stdio.h>
/**
 * main -Entry point
 *
 * description: prints all possible combination of 4 numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(c);
		c++;
	}
    putchar('\n');
    return (0);
}
