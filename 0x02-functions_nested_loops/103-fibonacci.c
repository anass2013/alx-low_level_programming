#include "main.h"

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: 0 always (Success)
 */

int main(void)
{
	unsigned long Fb1 = 0, Fb2 = 1, Fb3;
	long S;

	while (Fb2 <= 4000000)
	{
		Fb3 = Fb1 + Fb2;
		if (Fb3 > 4000000)
			break;

		if ((Fb3 % 2) == 0)
			S += Fb3;

		Fb1 = Fb2;
		Fb2 = Fb3;
	}

	printf("%ld\n", S);

	return (0);
}
