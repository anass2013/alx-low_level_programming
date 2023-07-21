#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 *
 * @size: size of triangle
 *
 * Return: 0 always (Success)
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if ((i + j) <= size)
					_putchar(' ');
				else
					_putchar('#');

			}
			_putchar('\n');
		}
	}
}
