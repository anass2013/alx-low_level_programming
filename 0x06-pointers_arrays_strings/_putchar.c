#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: the string to print
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
