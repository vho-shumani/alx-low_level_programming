#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of argumnets.
 * @argv: array
 *
 * Return: return 0 (success), 98 (fail).
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

