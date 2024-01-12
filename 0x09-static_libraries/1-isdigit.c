#include "main.h"

/**
 * _isdigit - A function that checks input for a digit between 0 - 9
 *
 * @c: input
 *
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
