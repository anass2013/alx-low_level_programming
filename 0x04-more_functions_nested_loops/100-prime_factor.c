#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number
 *
 * Return: 0 always
 */

int main(void)
{
	long i, Lp;
	long n = 612852475143;
	double sq = sqrt(n);

	for (i = 1; i <= sq; i++)
	{
		if (n % i == 0)
		{
			Lp = n / i;
		}
	}

	printf("%ld\n", Lp);

	return (0);
}
