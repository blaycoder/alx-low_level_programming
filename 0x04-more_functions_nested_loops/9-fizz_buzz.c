#include "main.h"

/**
 * main - Fizz multiples of three Buzz multiples of five
 *
 *
 * Return: On success 0.
 *
 */

int main(void)
{
	int j = 100;
	int i;

	i = 1;
	while (i <= j)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i != 100)
		printf(" ");
	i++;
	}
	printf("\n");
	return (0);
}
