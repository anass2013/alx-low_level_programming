#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int i, j, a;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			a = i * j;

			if (a < 10)
				_putchar(' ');
			else
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
