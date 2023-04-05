#include <unistd.h>

/**
 * _putchar - is a function that writes a single character c to the standard output stream
 * @c: prints the character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
