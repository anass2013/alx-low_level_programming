#include "main.h"

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i, S = 0;

	for (i = 1; i <= 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			S = S + i;
	}
	printf("%d\n", S);

	return (0);
}
