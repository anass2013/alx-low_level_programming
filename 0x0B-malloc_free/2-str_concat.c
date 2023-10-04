#include "main.h"

/**
 * _strlength - find length of a string
 * @s: string
 * Return: integer
 */

int _strlength(char *s)
{
	int sz = 0;

	for (; s[sz] != '\0'; sz++)
	;
	return (sz);
}

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i1, i2, j;
	char *n;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	i1 = _strlength(s1);
	i2 = _strlength(s2);
	n = malloc((i1 + i2) * sizeof(char) + 1);

	if (n == 0)
		return (0);

	for (j = 0; j <= i1 + i2; j++)
	{
		if (j < i1)
			n[j] = s1[j];
		else
			n[j] = s2[j - i1];
	}
	n[j] = '\0';
	return (n);
}
