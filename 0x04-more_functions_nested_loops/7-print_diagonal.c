#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line
 *
 * @n: input
 *
 * Return: 0 Success
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
