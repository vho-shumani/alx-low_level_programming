#include <stdio.h>
/**
*main - Entry point
*
*Description: prints numbers from 1 to 100.
*replaces multiples of 3 fizz and multiples of 5 with buzz.
*
*Return: always 0 (success)
*/
int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if ((a % 3) == 0 && (a % 5) ==0)
		{
			printf("FizzBuzz ");
		}else if ((a % 3) == 0)
		{
			printf("Fizz ");
		}else if ((a % 5) ==0)
		{
			printf("Buzz ");
		}else
		{
			printf("%d ",a);
		}
		a++;
	}
	printf("\n");
	return (0);
}
