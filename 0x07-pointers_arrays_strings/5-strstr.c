#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: input 1
 * @needle: input 2
 * Return: 0 Success
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1 = haystack;
	char *p2 = needle;

	while (*haystack != '\0')
	{
		while (*p1 == *p2 && *p2 != '\0')
		{
			p1++;
			p2++;
		}

		if (*p2 == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
