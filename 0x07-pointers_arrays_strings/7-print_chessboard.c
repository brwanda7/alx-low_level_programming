#include "main.h"
#include <string.h>
/**
 * print_chessboard - concantination fuction
 * @a : The character to print destination
 *
 * Return: return @a
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
