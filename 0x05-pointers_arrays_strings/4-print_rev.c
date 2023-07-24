#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse
 *
 * @s: pointer to the input string
 */

void print_rev(char *s)
{
	int l = strlen(s);
	int i = 0;

	for (i = l - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
