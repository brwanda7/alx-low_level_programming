#include <stdio.h>
/**
 * main - how to print alphabet reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;

	while (i < 26)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
