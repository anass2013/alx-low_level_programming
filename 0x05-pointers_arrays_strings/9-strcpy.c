#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 *
 * @dest: string input
 * @src: string input
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
