#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 *
 * @n: the number to computed
 *
 * Return: the absolute value of the integer or 0
 */

int _abs(int n)
{
	int n;

	if (n < 0)
		n = -n;
	return (n);
}
