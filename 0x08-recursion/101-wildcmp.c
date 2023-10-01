#include "main.h"

/**
 * move_star - move asterisk
 * @s2: the second string
 * Return: the pointer star
 */

char *move_star(char *s2)
{
	if (*s2 == '*')
		return (move_star(s2 + 1));
	else
		return (s2);
}

/**
 * messi - turns magic to reality
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if the same, 0 if not
 */

int messi(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);
	r += messi(s1 + 1, s2);
	return (r);
}

/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if are the same, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !*move_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			r += wildcmp(s1 + 1, s2 + 1);
		r += messi(s1, s2);
		return (!!r);
	}
	return (0);
}
