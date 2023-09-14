#include "main.h"
#include <stdio.h>
/**
 * _strlen - updates the value of the variable
 * @s : first charsas
 * Return: value of @qc
 */
int _strlen(char *s)
{
int qc;

printf("%s\n===========================================================================", s);
qc = 0;
while (*s != '\0')
{
printf("%s\n", s);
qc++;
s++;
}
return (qc);
}
