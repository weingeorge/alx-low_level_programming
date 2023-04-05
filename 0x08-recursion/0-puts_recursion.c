#include "main.h"

/**
 * _puts_recursion - recursive call with the next character
 * @s: prints the string character
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
