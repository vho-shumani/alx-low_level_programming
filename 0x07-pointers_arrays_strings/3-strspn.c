#include "main.h"
/**
*_strspn - gets the length of a prefix substring.
*@s: the main string to be analyzed
*@accept: substring
*
*
*Return: length of substring.
*/

unsigned int _strspn(char *s, char *accept)
{
	int len_s = 0;
	int checker = 0;

	while (*s != '\0')
	{
		int count = 0;

	while (*accept != '\0')
	{
		if (*s == *accept)
		{
			len_s++;
		}
		accept++;
		count++;
	}
	if (len_s == checker)
	{
		break;
	}
	accept = accept - count;
	checker++;
	s++;
	}
	return (len_s);
}
