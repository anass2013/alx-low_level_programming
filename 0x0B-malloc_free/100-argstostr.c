#include "main.h"

/**
 * _strlength - find the length of a string
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
 * *argstostr - concatenates all the arguments of your program
 * @ac: integer
 * @av: arguments
 * Return: pointer to a string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0;
	int n = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++; n++)
		n += _strlength(av[i]);

	s = malloc(sizeof(char) * n + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++; c++)
			s[c] = av[i][j];

		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}
