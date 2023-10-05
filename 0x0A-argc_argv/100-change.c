#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main - Entry point
*@argc: number of parameters
*@argv: array
*
*Return: change  as integer.
*/
int main(int argc, char *argv[])
{
	int coin[5] = {25, 10, 5, 2, 1};
	int i = 0;
	int number_of_coins = 0;
	int amount = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (amount < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		while (i < 5 && amount != 0)
		{

			if (amount >= coin[i])
			{
				amount = amount - coin[i];
				number_of_coins++;
			}
			if (amount < coin[i])
			{
				i++;
			}
		}
		printf("%d\n", number_of_coins);
		return (0);
	}
}
