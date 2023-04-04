#include "main.h"

/**
 * * The _memset fills memory with a constant byte
 * s is the  memory area to be filled
 * b is the char to copy
 * Then n is the number of times to copy b
 *
 * Return is a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
