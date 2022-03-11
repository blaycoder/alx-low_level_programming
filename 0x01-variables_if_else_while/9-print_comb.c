#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int comb;
for (comb = '0'; comb <= '9'; comb++)
{
	putchar(comb);
	if (comb < '9')
	{
		putchar(',');
		putchar(' ');
	}
	else
		putchar('\n');
}
return (0);
}
