#include "main.h"
/**
* _strncpy - copies a string
* @dest: first string
* @src: second string
* @n: number of characters in src to use
* Description: show a string
* Return: Always 0 (Success)
*/

char *_strncpy(char *dest, char *src, int n)

{
int cont;

cont = 0;
while (cont < n && src[cont] != '\0')
{
dest[cont] = src[cont];
cont++;

}
while (cont < n)
{
dest[cont] = '\0';
cont++;
}
return (dest);
}
