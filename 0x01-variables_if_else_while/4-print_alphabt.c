#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - how to print all alphabet exept q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h[24] = "abcdfghijklmnoprstuvwxyz";
	int a;

	for (a = 0; a < 24; a++)
	{
		putchar(h[a]);
	}

	putchar('\n');
	return (0);
}

