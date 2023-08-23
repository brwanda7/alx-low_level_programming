#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array -  reverses the content of an array of integers.
 * @a : an array of integers
 * @n : the number of elements to swap
 * Return: return @l
 */
void reverse_array(int *a, int n)
{
int i;

for (i = n; i > 0; i--) 
{
a[i] = a[n - i];
}
for (i = 0; i < n; i++)
{
*a = a[i];
}
}
