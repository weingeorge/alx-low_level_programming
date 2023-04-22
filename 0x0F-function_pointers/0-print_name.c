#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - this usually prints the name
 * @name: the name to print
 * @f: pointer to a printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
