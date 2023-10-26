#include "main.h"
#include <stdio.h>
unsigned int _pow(unsigned int y)
{
    unsigned int i, sum = 1;
    
    for (i = 0; i < y; i++)
    {
        sum *= 2;
    } 
    return (sum);
}
unsigned int _strlen(const char * b)
{
    char *c = (char *)b;
    unsigned int count = 0;
    while(*c != '\0' )
    {
        count++;
        c++;
    }
    return (count);
}
unsigned int binary_to_uint(const char *b)
{
    unsigned int count = _strlen(b) - 1;
    unsigned int sum = 0, i;
    unsigned int zero = 0;
    if (b == NULL)
    {
        return (0);
    }

    for (i = 0; count >= zero && b[i] != '\0'; i++, count--)
    {
        if (b[i] == '1')
        {
            sum += _pow(count);
        }
        else if (b[i] != '0')
        {
            return (0);
        }
    }
    return (sum);
}