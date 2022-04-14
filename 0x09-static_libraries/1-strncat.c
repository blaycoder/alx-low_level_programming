#include "main.h"
/**
*_strncat-appends n chars of a string
*@dest: pointer to a string that becomes appended to
*@src: pointer to a string that is tacked on
*@n: representing bytes
*Return: returning a pointer which is dest
*/

char *_strncat(char *dest, char *src, int n)
{
char *tmp1, *tmp2;
int i;

tmp1 = dest;
tmp2 = src;

while (*dest != '\0')
dest++;
i = 0;
while (*src != '\0' && i < n)
{
*dest = *src;
dest++;
src++;
i++;
}
*dest = '\0';
dest = tmp1;
src = tmp2;
return (dest);
}
