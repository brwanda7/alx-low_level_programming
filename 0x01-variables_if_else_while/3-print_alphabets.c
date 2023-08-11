#include <stdio.h>

/**
 * main - how to print alphabet in both lower case and upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int t;

	for (t = 0; t < 52; t++)
	{
		putchar(k[t]);
	}

	putchar('\n');
	return (0);
}
