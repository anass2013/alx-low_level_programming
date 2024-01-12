#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 *
 * @c: the character to treat
 *
 * Return: 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
