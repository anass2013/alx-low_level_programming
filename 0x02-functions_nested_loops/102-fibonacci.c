#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long Fb1 = 0, Fb2 = 1, Fb3;

	for (i = 0; i < 50; i++)
	{
		Fb3 = Fb2 + Fb1;
		printf("%lu", Fb3);

		Fb1 = Fb2;
		Fb2 = Fb3;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
