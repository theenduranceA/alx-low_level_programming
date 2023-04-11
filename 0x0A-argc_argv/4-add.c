#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x;
	unsigned int y, add = 0;
	char *z;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			z = argv[x];

			for (y = 0; y < strlen(z); y++)
			{
				if (z[y] < 48 || z[y] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			add += atoi(z);
			z++;
		}

		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
