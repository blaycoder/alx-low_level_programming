#includee "main.h"

/**
 * add - add two integers and return the result
 *@s: result of values sum
 *@a:  Value 1
 *@b: Value 2
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

int add(int a, int b)
{
	int r;

		r = (a + b);
	return (r);
}
