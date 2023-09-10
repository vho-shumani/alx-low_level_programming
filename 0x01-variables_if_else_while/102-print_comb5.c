nclude <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;

    while (a <= 9)
    {
        int b = 0;

        while (b <= 9)
        {
            int c = 0;

            while (c <= 9)
            {
                int d = 0;

                while (d <= 9)
                {
                    if ((b < d && a <= c) || (b == 0 && d == 0))
                    {
                        putchar('0' + a);
                        putchar('0' + b);
                        putchar(' ');
                        putchar('0' + c);
                        putchar('0' + d);
                        if (a != 9 || b != 8 || c != 9 || d != 9 )
                        {
                            putchar(',');
                            putchar(' ');
                        }
                    }
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
    putchar('\n');
    return 0;
}

