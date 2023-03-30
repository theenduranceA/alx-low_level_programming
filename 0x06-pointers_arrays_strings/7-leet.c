#include "main.h"
/**
 * leet - Function that encodes a string into 1337
 * @str: String to input
 * Return: A pointer
 */
char *leet(char *str)
{
	int x, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
	for (y = 0; y < 10; y++)
	{
	if (str[x] == s1[y])
	{
	str[x] = s2[y];
	}
	}
	}
	return (str);
}
