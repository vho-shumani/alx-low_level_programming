#include "main.h"
/**
*2-print_alphabet_x10.c - prints 10 times of alphabets, followed by newline.
*/
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		count++;
	}
}

