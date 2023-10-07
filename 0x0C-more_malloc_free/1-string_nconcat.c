#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - determine the length of string.
 * @c - string
 *
 * Return: the size of string(success).
 */
int _strlen(char *c)
{
	int len = 0;

	while (*c != '\0')
	{
		len++;
		c++;
	}
	return (len);
}
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes of s2.
 *
 * Return: pointer to a newly allocated space in memory (success).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int x = 0;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n > len2)
		ptr =(char *)malloc(sizeof(char) * (len1 + len2));
	else 
		ptr = malloc(sizeof(char) * (len1 + n));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (len1 + n); i++)
	{
		if  (i < len1)
		{
			ptr[i] = s1[i];
		}
		else 
		{
			ptr[i] = s2[x];
			x++;
		}
		
	}

	return (ptr);
}


	



