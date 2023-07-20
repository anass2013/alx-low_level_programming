#include "main.h"

/**
 * print_numbers - print numbers from 0 - 9
 *
 * Return: the numbers 0123456789
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar(i);

	_putchar("\n");
}
