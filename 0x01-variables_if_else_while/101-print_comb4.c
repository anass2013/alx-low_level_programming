#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				if (i < j && j < k)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
