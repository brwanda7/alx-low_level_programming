#include "main.h"
/**
 * print_alphabet - Prints alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	char ka = 'a';

	while (ka <= 'z')
	{
		_putchar(ka);
		ka++;
	}
	_putchar('\n');
}
