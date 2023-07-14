#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char m = 'a';
	char M = 'A';

	while (m <= 'z')
	{
		putchar(m);
		m++;
	}

	while (M <= 'Z')
	{
		putchar(M);
		M++;
	}
	putchar('\n');

	return (0);
}
