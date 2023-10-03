#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it
 * @size: size of array
 * @c: char to initialize
 * Return: pointer o the array
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
