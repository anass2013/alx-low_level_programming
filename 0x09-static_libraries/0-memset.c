#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer input
 * @b: constant byte input
 * @n: the bytes to use
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (n > 0)
	{
		for (i = 0; n > 0; i++)
		{
			s[i] = b;
			n--;
		}
	}

	return (s);
}
