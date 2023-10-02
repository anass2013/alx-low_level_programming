#include "main.h"

/**
 * _islower - a function that check if character is lowercase
 *
 * @c: The character to be checked
 *
 * Return: 1 if 'c' is lowercase or 0 always (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
