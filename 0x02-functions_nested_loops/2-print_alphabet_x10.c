#include "main.h"

/**
* print_alphabet_x10 - prints out all letters 10 times.
*
* Return:void doesnot return anything.
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

