#include "main.h"

/**
 * print_line - printing lines
 * @n: number of times
 *
 * Return: void
 */


void print_line(int n)
{
int i;

i = 0;
while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
