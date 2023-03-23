#include "main.h"
#include <stdio.h>
/**
 * main - Program that print numbers 1 to 100
 * for multiples of 3, print Fizz
 * for multiples of 5, print Buzz
 * for multiple of 3 & 5, print FizzBuzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
	if (a % 3 == 0)
	{
	printf("Fizz");
	}
	else if (a % 5 == 0)
	{
	printf("Buzz");
	}
	else if ((a % 3 == 0) && (a % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else
	{
	printf("%d", a);
	}
	if (a != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
