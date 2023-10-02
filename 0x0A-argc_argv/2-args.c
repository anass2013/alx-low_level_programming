#include <stdio.h>

/**
 * main -  prints all arguments it receives
 * @argc: integer
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int j = 0;

	while (argc--)
	{
		printf("%s\n", argv[j]);
		j++;
	}

	return (0);
}
