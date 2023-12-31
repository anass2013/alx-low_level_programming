#include "main.h"

/**
 * print_number - a function that prints an integer
 *
 * @n: input
 */

void print_number(int n)
{
	unsigned int nb = n;

	if (n < 0)
	{
		_putchar('-');
		nb = -nb;
	}

	if ((nb / 10) > 0)
		print_number(nb / 10);

	_putchar((nb % 10) + '0');
}
