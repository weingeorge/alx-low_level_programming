#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - is used to display the contents of a buffer in hexadecimal format
 * @buffer: refers to the address in memory of the buffer to be printed.
 * @size: indicates the amount of memory, in bytes, to be printed by the function.
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}
