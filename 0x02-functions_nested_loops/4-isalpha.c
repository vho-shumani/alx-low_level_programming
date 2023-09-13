#include "main.h"
/**
*_isalpha - determine if character c is a alphabet.
*@c: is the received argument that is determine if its a alphabet.
*
*
*Return: if is 1 it is a alphabet.
*
*/
int _isalpha(int c)
{

	int low = 'a';
	int high = 'A';
	int result = 0;

	while (low <= 'z' || high <= 'Z')
	{
		if (c == low || c == high)
		{
			result = 1;
			low = 'z';
			high = 'Z';
		}
		low++;
		high++;
	}
	return (result);
}
