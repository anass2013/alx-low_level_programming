#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string input
 * Return: string encoded
 */

char *leet(char *str)
{
	char *sp = str;
	char key[] = {'A', 'E', '0', 'T', 'L'};
	int vl[] = {4, 3, 0, 7, 1}
	unsigned int j;

	while (*str)
	{
		for (j = 0; j < sizeof(key) / sizeof(char); j++)
		{
			if (*str == key[j] || *str == key[j] + 32)
			{
				*str = '0' + vl[j];
			}
		}
		str++;
	}

	return (sp);
}
