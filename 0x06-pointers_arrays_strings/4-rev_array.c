#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 *
 * @a: array of integers
 * @n: number of elements
 *
 * Return: 0 Success
 */

void reverse_array(int *a, int n)
{
	int i, j, tm;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		tm = a[i];
		a[i] = a[j];
		a[j] = tm;
	}
}
