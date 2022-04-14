#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *@c: the alphabets to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{

	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
