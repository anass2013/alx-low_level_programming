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
	char c;

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
