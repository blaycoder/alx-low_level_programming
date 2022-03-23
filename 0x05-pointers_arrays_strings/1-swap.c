#include "main.h"

/**
 * swap_int - swap value of two integers
 *@a: first parameter
 *@b: second parameter
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int swap = *a;
*a = *b;
*b = swap;
}
