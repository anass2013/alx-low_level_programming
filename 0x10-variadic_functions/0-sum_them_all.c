#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of arguments
 * @...: the integers to sum
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	int sm = 0, i = n;
	va_list p;

	if (!n)
		return (0);
	va_start(p, n);
	while (i--)
		sm += va_arg(p, int);
	va_end(p);
	return (sm);
}
