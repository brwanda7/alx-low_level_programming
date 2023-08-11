#include <stdio.h>
/**
 * main - how to print alphabet reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 26; i > 0; i--)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
