#include "main.h"

/**
 * *_memcpy - is used to copy a block of memory from one location to another
 * @dest: refers to the destination memory area where the contents will be copied
 * @src: is the memory area from which the data will be copied
 * @n: number of bytes to be copied from the source memory area to the destination memory area.
 *
 * Return: pointer to destination area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
