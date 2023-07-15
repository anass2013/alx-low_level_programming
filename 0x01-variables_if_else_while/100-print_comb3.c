#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 always Success
 */

int main(void)
{
	int dg1 = 0, dg2;

	for (dg1 = 0; dg1 < 10; dg1++)
	{
		for (dg2 = dg1 + 1; dg2 < 10; dg2++)
		{
			putchar(dg1 + '0');
			putchar(dg2 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
