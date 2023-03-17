#include <stdio.h>

/**
 * main - Prints numbers 0 to 9 and letters a to f in lowercase.
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	char l;

	for (n = 48; n < 58; n++)

		putchar(n);

	for (l = 'a'; l <= 'f'; l++)

		putchar(l);

	putchar('\n');

	return (0);
}
