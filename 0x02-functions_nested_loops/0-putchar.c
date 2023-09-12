#include <stdio.h>
/**
*main - Entry point
*
*description: print the _putchar string to the stdout
*
*Return: Always 0 (Success)
*/

int main(void)
{
	char put[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		putchar(put[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
