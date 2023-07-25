#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 *
 * @s: string input
 *
 * Return: an integer
 */

int _atoi(char *s)
{
	unsigned int i = 0;
	int sg = 1;

	while (*s++)
	{
		if (*s == '-')
			sg *= -1;
		else if (*s >= '0' && *s <= '9')
			i = (i * 10) + (*s - '0');
		else if (i > 0)
			break;
	}

	return (i * sg);
}
