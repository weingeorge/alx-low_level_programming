#include "main.h"

/**
 * *_memset - memory area pointed to by s with the constant byte b
 * @s: memory area to be filled
 * @b: constant byte
 * @n: number of bytes of the memory
 *
 * Return: Always pointer to string s
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
