#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int s = 0, i = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (; str[s] != '\0'; s++)
	;

	n = malloc(s * sizeof(*str) + 1);

	if (n == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < s; i++)
			n[i] = str[i];
	}
	return (n);
}
