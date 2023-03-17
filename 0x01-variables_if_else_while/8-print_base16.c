#include <stdio.h>

/**
 * main - Prints numbers 0 to 9 and letters a to f in lowercase.
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	char lc;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}
	for (lc = 'a'; lc <= 'f'; lc++)
	{
		putchar(lc);
	}
		putchar('\n');

	return (0);
}
