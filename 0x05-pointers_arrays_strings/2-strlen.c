#include "main.h"

/**
 * _strlen - updates the value of the variable
 * @s - first char
 * Return: value of s
 */
int _strlen(char *s)
{
int qc;

qc = 0;
while (*s != '\0')
{
qc++;
s++;
}
return (qc);
}
