#include "main.h"
/**
*_strcmp - compare two different string
*@s1: first string to be compared to.
*@s2: second string to compare.
*
*
*Return: return interger.
*/
int _strcmp(char *s1, char *s2)
{
	int result = 0;
	char *ptr1 = s1;
	char *ptr2 = s2;

	while (*ptr1 != '\0')
	{
	if (*ptr1 != *ptr2)
	{
		int i = (int) *ptr1;
		int i2 = (int) *ptr2;

		result = i - i2;
		break;
	}
	ptr1++;
	ptr2++;
	}
	return (result);
}
