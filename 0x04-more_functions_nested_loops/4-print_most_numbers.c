#include "main.h"
  
 /**
  * print_numbers - print 0-9 without 2-4
  * return: void
  */
void print_most_numbers(void)
{
int a;

a = 0;
while ( a <= 9)
{
if (a !=2 && a !=4)
{
_putchar(a);
}
a++;
}
_putchar('\n');
}
