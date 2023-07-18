#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int c, l;

	for (l = 0; l < 10; l++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
