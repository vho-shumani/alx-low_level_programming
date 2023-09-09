#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c = 0;

	while (c <= 9)
	{
		int C = 0;
		while (C <= 9)
		{
			if (C != c && c < C)
			{
				putchar('0' + c);
				putchar('0' + C);
				putchar(',');
				putchar(' ');
			}
			C++;
		}
		c++;
	}
	putchar('\n');
	return 0;
}
