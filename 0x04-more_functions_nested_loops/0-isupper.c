#include "main.h"
/**
*_isupper - chechks if c is a uppercase.
*@c: character to be checked.
*
*Return: 1 if is uppercase or 0 if lowercase.
*/
int _isupper(int c)
{
	int a = 'A';
	int z = 'Z';
	int result = 0;

	while (a <= z)
	{
		if (a == c)
		{
			result = 1;
		}
		a++;
	}
	return (result);
}
