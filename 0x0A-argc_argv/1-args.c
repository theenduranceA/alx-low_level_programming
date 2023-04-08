#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints the number of argument passed.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
		*argv = 0;
		printf("%d\n", argc - 1);
		return (0);
}
