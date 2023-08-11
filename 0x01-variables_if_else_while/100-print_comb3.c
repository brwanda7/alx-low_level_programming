#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	int n;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}


	return (0);
}

