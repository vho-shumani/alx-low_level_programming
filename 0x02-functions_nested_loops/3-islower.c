#include <stdio.h>
#include "main.h"
/**
* _islower - determine if the character c is a lowercase letter.
*@c: character that is inputed.
*
* Return if letter is a lowercase (1).
* Return: if the letter is not a lowercase (0).
*/
int _islower(int c)
{
	for (char a = 'A'; a <= 'Z'; a++)
	{
		if (c != a)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
