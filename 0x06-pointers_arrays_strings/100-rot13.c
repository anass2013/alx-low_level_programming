#include "main.h"

/**
 * rot13 -  encodes a string using rot13
 * @c: string input
 * Return: encoded string
 */

char *rot13(char *c)
{
	int i;

	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *pc = c;

	while (*c)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*c == s1[i])
			{
				*c = s2[i];
				break;
			}
		}
		c++;
	}
	return (pc);
}
