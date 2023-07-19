#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int Fb1 = 0, Fb2 = 1, Fb3, i;

	printf("%d", Fb1);
	printf(", %d", Fb2);

	for (i = 3; i <= 50; i++)
	{
		Fb3 = Fb2 + Fb1;
		i++;
		printf(", %d", Fb3);
		Fb1 = Fb2;
		Fb3 = Fb2;
	}
	printf("\n");
	return (0);
}
