#include "main.h"

/**
 * _sqrt_finder - Function that finds the square root.
 * @n: The number to find its square root.
 * @result: The square root of n.
 * Return: The result.
 */

int _sqrt_finder(int n, int result)
{
	if (n * n == result)
		return (n);
	if (n * n > result)
		return (-1);
	return (_sqrt_finder(n - 1, result));
}


/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: The number to find its root.
 * Return: The root of the number.
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 1)
		return (n);
	return (_sqrt_finder(n, 1));
}
