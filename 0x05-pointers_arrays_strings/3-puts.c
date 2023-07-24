#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line
 *
 * @str: the string imput
 *
 * Return: 0 always (Success)
 */

void _puts(char *str)
{
	int i;

	for  (i = 0; str != '\0'; str++)
		_putchar(str + 0);

	_putchar('\n');
}
