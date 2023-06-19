#include "main.h"
#include <stdlib.h>
/**
 * _strstr - Function that locates a substring
 * @haystack: The string to be searched
 * @needle: The substring
 * Return: A pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *str1;
	char *str2;

	str1 = haystack;
	str2 = needle;
	for (; *haystack != '\0'; haystack++)
	{
	while (*str1 == *str2 && *str2 != '\0')
	{
		str1++;
		str2++;
	}
	if (*str2 == '\0')
	return (haystack);
	}
	return (NULL);
}
