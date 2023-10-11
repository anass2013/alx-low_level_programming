#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: int array
 * @size: the array size
 * @cmp: pointer to the function to be used to compare
 *
 * Return: the integer index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (array && size && cmp)
		while (j < size)
		{
			if (cmp(array[j]))
				return (j);
			j++;
		}
	return (-1);
}
