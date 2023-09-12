#include "main.h"
/**
*print_alphabet - writes all the alphabets in lowercase and new line to stdout.
*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
