#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: input
 *
 * Return: 1 on Success
 * on error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
