#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, s1_lgth, s2_lgth;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_lgth = 0; s1[s1_lgth] != '\0'; s1_lgth++)
		;

	for (s2_lgth = 0; s2[s2_lgth] != '\0'; s2_lgth++)
		;

	s = malloc(s1_lgth + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; s1[j] != '\0'; j++)
		s[j] = s1[j];

	for (i = 0; i < n; i++)
	{
		s[j] = s2[i];
		j++;
	}

	s[j] = '\0';
	return (s);
}
