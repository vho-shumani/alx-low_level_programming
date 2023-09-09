#include <stdio.h>
/**
 * main -Entry point
 *
 * description: prints all possible combination of 3 numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		int i = 0;

		while (i <= 9)
		{
			int x = 0;

			if (c != i && c < i)
			{
				while (x <= 9)
				{
					if (i != x && i < x)
					{
						putchar('0' + c);
						putchar('0' + i);
						putchar('0' + x);
						if (c != 7 || i != 8 || x != 9)
						{
							putchar(',');
							putchar(' ');
						}

					}
					x++;
				}

			}
			i++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
