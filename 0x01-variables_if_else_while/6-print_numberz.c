#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - how to know if number is negative , positive or zero using if
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h[10] = "0123456789";
	int a = 0;

	while (a < 10)
	{
		putchar(h[a]);
		a++;
	}

	putchar('\n');

	return (0);
}

