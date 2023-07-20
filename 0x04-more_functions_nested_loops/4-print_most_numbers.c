#include "main.h"

/**
 * print_most_numbers - printing numbers from 0 to 9
 *
 * Return: 0 always (Success)
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i >= 0 && i <= 9)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
