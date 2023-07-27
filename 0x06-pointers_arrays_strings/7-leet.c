#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string input
 * Return: string encoded
 */

char *leet(char *c)
{
	int i, j;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == str1[j])
			{
				c[i] = str2[j];
			}
		}
	}
	return (c);
}
