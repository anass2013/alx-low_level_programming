#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers
 * @argc: int
 * @argv: list
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	int Product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		prinf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
