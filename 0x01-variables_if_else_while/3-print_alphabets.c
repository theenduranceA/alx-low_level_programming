#include <stdio.h>

/**
 * main - Prints the alphabets in lower and uppercase.
 * Return: 0 (Success)
 */

int main(void)
{

char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}

