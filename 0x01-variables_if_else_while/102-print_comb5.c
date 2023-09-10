
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

		while (i < 9)
		{
			int x = 0;

			while (x <= 9)
			{
			    int f =0;

			    while (f <= 9)
                {
                    if (f != c || f != i || f != x)
                    {
                        putchar('0' + c);
                        putchar('0' + i);
                        putchar(' ');
                        putchar('0' + x);
                        putchar('0' + f);

                        if (c != 9 || i != 8 || x != 9 || f != 9)
                        {
                            putchar(',');
                            putchar(' ');
                        }
                    }
                    f++;
				}
                x++;
			}
            i++;
			}
		c++;
		}
    putchar('\n');
    return (0);
}

