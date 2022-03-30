#include "main.h"

/**
* _strchr- locates a character in a string
* @s: string
* @c: character to search for
* Return : return c
*/

char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; s[i] != '\0'; i++)
{
if (c == s[i])
{
return (s[i]);
}
else if (c != '\0')
return ('\0');
}
}
