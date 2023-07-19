#include "main.h"

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: 0 always (Success)
 */

int main(void)
{
	unsigned long Fb1 = 0, Fb2 = 2, Fb3;
	long S = Fb1 + Fb2;

	while (Fb2 <= 4000000)
	{
		Fb3 = 4 * Fb2 + Fb1;
		if (Fb3 > 4000000)
			break;

		S = S + Fb3;
		Fb1 = Fb2;
		Fb2 = Fb3;
		S += Fb2;
	}

	printf("%ld\n", S);

	return (0);
}
