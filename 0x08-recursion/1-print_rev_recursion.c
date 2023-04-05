#include "main.h"

/**
 * _print_rev_recursion - is a recursive function in C that prints a given string in reverse order
 * @s:  prints the string character by character using recursion
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
