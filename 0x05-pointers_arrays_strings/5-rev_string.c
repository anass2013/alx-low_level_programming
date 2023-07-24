#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: string input
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	int a;

	while (s[i++])
		len++;

	for (i = 0; i < len / 2; i++)
	{
		a = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = a;
	}
}
