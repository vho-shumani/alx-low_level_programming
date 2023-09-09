#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all alphabets in lowercase except q and e.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');

	return (0);
}

