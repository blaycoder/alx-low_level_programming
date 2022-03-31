#include "main.h"

/**
* _puts_recursion - prints a string
* @s: string that should be printed
* Return: return no string
*/

void _puts_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_puts(*(s));
		++s;
		_puts(s);
	}
	else
		_putchar('\n');
}
