#include "main.h"
#include <stdlib.h>
/**
*str_concat - concatenates two string.
*@s1: first string
*@s2: second string
*
*Return: pointer containing both s1 and s2.
*/
char *str_concat(char *s1, char *s2)
{
	int len1 = 0; 
	int len2 = 0; 
	int x = 0; 
	int i = 0;
	char *ptr;
	int max_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}	
	while (*s1 != '\0')
	{
		s1++;
		len1++;
	}
	while(*s2 != '\0')
	{
		s2++;
		len2++;
	}
	s1 = s1 - len1;
	s2 = s2 - len2;
	max_len = len1 + len2;
	ptr = (char *) malloc(sizeof(char) * max_len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < max_len)
	{
		if (i < len1)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[x];
			x++;
		}
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
