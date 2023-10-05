#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: integer
 * @argv: pointer to an array
 * Return: always 0 on Success
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int j, lcents = 0, mn = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (j = 0; j < 5; j++)
		{
			if (mn >= cents[j])
			{
				lcents += mn / cents[j];
				mn = mn % cents[j];
				if (mn % cents[j] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
