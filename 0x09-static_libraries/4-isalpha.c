#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: The character te be checked
 *
 * Return: 1 if it's a letter or 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
