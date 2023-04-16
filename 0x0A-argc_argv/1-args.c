#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of the arguments
 * @argc: arguments counts
 * @argv: array of strings that hold the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
