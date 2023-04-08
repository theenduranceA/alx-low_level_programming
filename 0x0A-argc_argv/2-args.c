#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints all arguments.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Alway 0 (Success)
 */

int main(int argc, char *argv[])
{
	int j = 0;

	for (j = 0; j < argc; j++)
	{

		printf("%s\n", argv[j]);
	}

	return (0);
}
