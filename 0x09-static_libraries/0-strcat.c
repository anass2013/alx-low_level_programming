#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: input destination
 * @src: input source
 *
 * Return: pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int c, a;

	c = 0;
	/*the size of dest array*/
	while (dest[c])
		c++;

	for (a = 0; src[a] ; a++)
		dest[c++] = src[a];

	return (dest);
}
