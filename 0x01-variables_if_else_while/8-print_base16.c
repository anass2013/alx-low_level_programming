#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success
 */

int main(void)
{
	char ch = 'a';

	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
