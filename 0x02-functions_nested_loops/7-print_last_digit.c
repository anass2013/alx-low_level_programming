#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: the number to treat
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int Ld;

	if (n < 0)
		Ld = (-n) % 10;
	else
		Ld = n % 10;
	_putchar(Ld + 48);

	return (Ld);
}
