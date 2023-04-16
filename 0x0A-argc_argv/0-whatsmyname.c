#include <stdio.h>
#include "main.h"

/**
 * main - always prints the name of a program started
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
