#include "main.h"

/**
 * _pow_recursion - Function that returns value of x taised to y.
 * @x: The integer to be raised.
 * @y: The power.
 * Return; Value of x.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else

	return (x * _pow_recursion(y - 1, x));
}
