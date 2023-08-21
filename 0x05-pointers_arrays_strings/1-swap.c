#include "main.h"

/**
 * swap_int  - updates the value of the variable
 * @a: pointer to the variable to update
 * @b: pointer to the variable to update
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *b;
*b = *a;
*a = temp;
}
