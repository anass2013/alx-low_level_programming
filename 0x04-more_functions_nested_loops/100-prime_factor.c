#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number
 *
 * Return: 0 always
 */

int main(void)
{
	long n = 612852475143, i;

	while (i < (n / 2))
	{
		if ((n % 2) == 0)
		{
			n /= 2;
			continue;
		}

		for (i = 3; i < (n / 2); i += 2)
		{
			if ((i % 2) == 0)
				n /= i;
		}
	}

	printf("%ld\n", n);

	return (0);
}
