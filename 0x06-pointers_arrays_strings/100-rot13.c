#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encoding a string using rot13
 * @str: The string to be encoded
 *
 * Return: A pointer
 */

char *rot13(char *str)
{
	int a;
	int b;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
	for (b = 0; b < 52; b++)
	{
	if (str[a] == alph[b])
	{
	str[a] = rot[b];
	break;
	}
	}
	}
	return (str);
}

