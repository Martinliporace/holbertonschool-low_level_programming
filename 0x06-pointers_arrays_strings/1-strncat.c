#include "main.h"
/**
* _strncat - concatenates two strings.
* @dest: first string
* @src: second string
* @n: number of characters in src to use
* Description: show a string
* Return: Always 0 (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
int ini, cont;
int max = n;
ini = 0;
cont = 0;
while (dest[ini] != '\0')
ini++;
while ((dest[ini] = src[cont]) && (src[cont] <= max))
{
ini++;
cont++;
}
if (src[cont] < max)
{
dest[cont] = src[ini];
}
return (dest);
}
