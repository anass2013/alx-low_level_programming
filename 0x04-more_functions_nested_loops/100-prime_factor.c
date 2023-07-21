#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number
 *
 * Return: 0 always
 */

int main(void)
{
	long i = 2, lp = -1, n = 612852475143;

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			lp = i;
			n = n / i;
		}
	}
	if (n > 1)
		lp = n;

	printf("%ld", lp);

	return (0);
}
