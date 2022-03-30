#include "main.h"

/**
* _strchr - function that locates a character in a string
* @s: string
* @c: character to search for
* Return : return c
*/

char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; s[i] != '\0'; s++)
{
if (c == s[i]){
return (c);
}
else if (c != s[i])
return (NULL);
}
