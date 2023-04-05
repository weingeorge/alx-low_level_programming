#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locate the first occurrence of a character within a string
 * @s: is a pointer to the null-terminated string to search
 * @c: is the character to locate
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
