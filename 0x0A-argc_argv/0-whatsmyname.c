#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name.
 * @argv: Argument vector.
 * @argc: Argument count
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
		return (0);
}
