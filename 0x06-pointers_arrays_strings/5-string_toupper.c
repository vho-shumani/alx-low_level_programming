#include "main.h"
/**
*string_toupper - capitalizes all of the alphabets in the string.
*@str: the string.
*
*
*Return: return final string.
*/
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		int i = (int) *ptr;

		if (i > 96 && i < 123)
		*ptr = i - 32;
		ptr++;
	}
	return (str);
}
