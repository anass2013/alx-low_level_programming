#include "main.h"

/**
 * *_setfill - fills memory with a constant type
 * @s: pointer
 * @b: constant
 * @n: maximum bytes to use
 * Return: string
 */

char *_setfill(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;

	return (p);
}

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_setfill(m, 0, sizeof(int) * nmemb);

	return (m);
}
