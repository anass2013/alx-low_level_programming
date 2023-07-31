#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals.
 * @a: input
 * @size: size of input
 */

void print_diagsums(int *a, int size)
{
	int i, sm1 = 0, sm2 = 0;

	for (i = 0; i < size; i++)
	{
		sm1 += a[i];
		sm2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sm1);
	printf("%d\n", sm2);
}
