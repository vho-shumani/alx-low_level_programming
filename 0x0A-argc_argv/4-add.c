#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - Entry point
*@argc: number of elements in array.
*@argv: array
*
*
*Return: always success(0)
*/
int main(int argc, char *argv[])
{
	int a, b;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b] != '\0'; b++)
			{
				if (!isdigit(argv[a][b]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[a]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
