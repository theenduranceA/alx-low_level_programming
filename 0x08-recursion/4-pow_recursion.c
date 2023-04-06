#include "main.h"

/**
 * _pow_recursion - Function that raises x to y.
 * @x: The integer to be raised.
 * @y: The power.
 * Return: -1 or 1
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(y - 1, x));
}
