#include "main.h"

/**
 * lst_id - returns the last index of a string
 * @s: pointer the string
 * Return: integer
 */

int is_palindrome(char *s);
int chk(char *s, int st, int e, int m);
int lst_id(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += lst_id(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int e = lst_id(s);

	return (chk(s, 0, e - 1, e % 2));
}

/**
 * chk - look for a palindrome
 * @s: string
 * @st: integer
 * @e: integer
 * @m: int
 * Return: 0 or 1
 */

int chk(char *s, int st, int e, int m)
{
	if ((st == e && m != 0) || (st == e + 1 && m == 0))
		return (1);
	else if (s[st] != s[e])
		return (0);
	else
		return (chk(s, st + 1, e - 1, m));
}
