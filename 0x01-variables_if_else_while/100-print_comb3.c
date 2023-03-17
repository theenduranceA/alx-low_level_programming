#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 35; a <= 43; a++)
	{
		for (b = 36; b <= 44; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 43 || b != 44)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

