#include "main.h"

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: 0 always (Success)
 */

int main(void)
{
	int i;
	unsigned long Fb1 = 1, Fb2 = 2, Fb3;
	long S = 0;

	while (Fb1 + Fb2 < 4000000)
	{
		Fb3 = Fb1 + Fb2;
		if (Fb3 % 2 == 0)
		{
			S = S + Fb3;
			Fb1 = Fb2;
			Fb2 = Fb3;
			i++;
		}
	}
	printf("%ld\n", S);

	return (0);
}
