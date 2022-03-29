#include "main.h"
/**
* cap_string - function to capitalize all words of a string
* @s: string to capitalize
* Return: return s
*/

char *cap_string(char *s)
{
char sepwrd[13] = {' ', '\t','\n', ',', ';', '.', '!', '?', '"', '(', ')', '{' ,'}'};
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
for (j = 0; j < 13; j++)
{
if (s[i] == sepwrd[j])
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] -= 32;
}
}
}
}
return (s);
}
