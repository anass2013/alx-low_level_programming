#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @Nb: the number to treat
 *
 * Return: the value of the last digit
 */

int print_last_digit(int Nb)
{
	if (Nb < 0)
		return (-Nb % 10);
	if (Nb == 0)
		return (0);
	if (Nb > 0)
		return (Nb % 10);
}
