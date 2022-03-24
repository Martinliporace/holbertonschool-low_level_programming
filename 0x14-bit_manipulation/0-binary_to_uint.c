#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: char
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
int cont = 0;
unsigned int n = 0;

if (!b)
return (0);
while (b[cont])
{
if (b[cont] != '0' && b[cont] != '1')
return (0);
n = n << 1;
if (b[cont] == '1')
n += 1;
cont++;
}
return (n);
}
