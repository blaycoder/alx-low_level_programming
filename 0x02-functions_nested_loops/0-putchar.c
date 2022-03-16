#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c = '_';

do {
_putchar(c);
if (c == '_')
c = 'p';
else if (c == 'p')
c = 'u';
else if (c == 'u')
c = 't';
else if (c == 't')
c = 'c';
else if (c == 'c')
c = 'h';
else if (c == 'h')
c = 'a';
else if (c == 'a')
c = 'r';
else if (c == 'r')
c = '\n';
else if (c == '\n')
c = 'm';
}while (c != 'm');

return (0);
}
