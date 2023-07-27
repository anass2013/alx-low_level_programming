#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string input
 * Return: string encoded
 */

char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', '0', 'T', 'L'};
	int vl[] = {4, 3, 0, 7, 1};
	unsigned int j;

	while (*c)
	{
		for (j = 0; j < sizeof(key) / sizeof(char); j++)
		{
			if (*c == key[j] || *c == key[j] + 32)
			{
				*c = 48 + vl[j];
			}
		}
		c++;
	}

	return (cp);
}
