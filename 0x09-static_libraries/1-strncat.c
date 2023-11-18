#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: destination input
 * @src: source input
 * @n: number of bytes from @src
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, a;

	c = 0;
	while (dest[c])
		c++;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[c + a] = src[a];

	dest[c + a] = '\0';

	return (dest);
}
