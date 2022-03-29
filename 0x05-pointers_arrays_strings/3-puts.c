#include "main.h"

/**
 * _puts - functiion that print a string
 *@str: parameter
 * Return: Always 0.
 */

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putschar(i);
}
_putchar('\n');
}
