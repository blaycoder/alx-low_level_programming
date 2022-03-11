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
char hexadecimal;
for (hexadecimal = '0'; hexadecimal <= '9'; hexadecimal++)
{
putchar(hexadecimal);
}
for (hexadecimal = 'a'; hexadecimal <= 'f'; hexadecimal++)
{
putchar(hexadecimal);
}
putchar('\n');
return (0);
}
