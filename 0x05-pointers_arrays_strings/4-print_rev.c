#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse
 *
 * @s: pointer to the input string
 */

void print_rev(char *s)
{
	int l = 0;
	int i;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;

	for (i = l; i > 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
