#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints numbers 0 to 9 and letters a to f in lowercase.
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	char low;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
		putchar('\n');

	return (0);
}
