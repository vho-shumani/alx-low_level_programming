#include "main.h"
/**
*_strstr - finds the first occurrence of the substring in main string.
*@haystack: main string.
*@needle: substring.
*
*
*Return: a point to the beginning of substring.
*/
char *_strstr(char *haystack, char *needle)
{
	int len = 0;

	while (*needle != '\0')
	{
		len++;
		needle++;
	}
	needle = needle - len;
	while (*haystack != '\0')
	{
		int i = 0;

		if (*haystack == *needle)
		{
		while (i < len)
		{
			i++;
			if (*(needle + i) != *(haystack + i))
			{
				break;
			}
		}
	}
	if (i == len)
	{
		return (haystack);
	}
	haystack++;
	}
	return ('\0');
}
