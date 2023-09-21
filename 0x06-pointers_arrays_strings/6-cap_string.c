#include "main.h"
/**
*cap_string - capitalizes every string after a separator.
*@str: the string
*
*
*Return: the string
*/
char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == ',' || *ptr == '\n' || *ptr == '.' ||
		*ptr == '(' ||
		*ptr == ')' || *ptr == '{' || *ptr == '}' || *ptr == '"' ||
		*ptr == '?' || *ptr == ';' || *ptr == ',' || *ptr == '\t')
		{
			while (*ptr == ' ' || *ptr == ',' || *ptr == '\n' ||
			*ptr == '.' ||
			*ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}' ||
			*ptr == '"' || *ptr == '?' || *ptr == ';' || *ptr == ',' ||
			*ptr == '\t')
			{
				int i;

				ptr++;
				i = (int) *ptr;

				if (i > 96 && i < 123)
				{
					*ptr = i - 32;
				}
			}
		}
		ptr++;
	}
	return (str);
}
