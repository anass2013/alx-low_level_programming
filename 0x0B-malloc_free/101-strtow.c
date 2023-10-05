#include "main.h"

/**
 * wordcnt - counts the number of words
 * @s: string
 * Return: integer
 */

int wordcnt(char *s)
{
	int i, number = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				number++;
		}
		else if (i == 0)
			number++;
	}
	number++;
	return (number);
}

/**
 * **strtow - splits a string into words
 * @str: string input
 * Return: pointer to a string
 */

char **strtow(char *str)
{
	int i, j, k, m, n = 0, wrdc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wordcnt(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wrdc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wrdc] == NULL)
			{
				for (k = 0; k < wrdc; k++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (m = 0; m < j; m++)
				w[wrdc][m] = str[i + m];
			w[wrdc][m] = '\0';
			wrdc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}
