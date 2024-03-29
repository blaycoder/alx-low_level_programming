#include "main.h"

/**
* _strncpy - a function that concatenates a string
* @dest: a destination where the string will be copied to
* @src: original location of the string
* @n : number of bytes
* Return: This will return dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
