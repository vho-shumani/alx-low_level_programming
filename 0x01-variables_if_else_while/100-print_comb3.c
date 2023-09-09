#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 *
 * Description: prints out all possible two digit numbers.
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		int C = 0;

		while (C <= 9)
		{
			if (c != C && c < C)
			{
				putchar('0' + c);
				putchar('0' + C);
				if (c != 8 || C != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			C++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
