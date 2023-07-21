#include "main.h"

/**
 * main - finds and prints the largest prime factor
 *
 * Return: 0 always (Success)
 */

void main(void)
{
	int i = 2, lp = 0;
	long int n = 612852475143;

	while ((i * i) <= n)
	{
		while (n % i == 0)
		{
			lp = i;
			n = n / i;
		}
		i++;
	}

	if (n > 1)
	{
		lp = n;
	}
	printf("%d", lp);
}
