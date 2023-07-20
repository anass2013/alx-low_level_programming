#include "main.h"

/**
 * print_line - a function that draws a straight line
 *
 * @n: the input
 *
 * Return: 0 always Success
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
