#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: integer
 * @height: integer
 * Return: pointer to a 2d array
 */

int **alloc_grid(int width, int height)
{
	int **t, i, j;

	t = malloc(sizeof(*t) * height);

	if (width <= 0 || height <= 0 || t == 0)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < height; j++)
		{
			t[j] = malloc(sizeof(**t) * width);
			if (t[j] == 0)
			{
				while (j--)
					free(t[j]);
				free(t);
				return (NULL);
			}

			for (i = 0; i < width; i++)
				t[j][i] = 0;
		}
	}

	return (t);
}

