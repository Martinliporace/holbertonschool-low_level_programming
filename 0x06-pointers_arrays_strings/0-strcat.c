#include "main.h"
/**
* _strcat - concatenates two strings.
* @dest: first string
* @src: second string
* Description: show a string
* Return: Always 0 (Success)
*/

char *_strcat(char *dest, char *src)
{
int ini, cont;

ini = cont = 0;
while (dest[ini] != '\0')
ini++;
while ((dest[ini] = src[cont]))
{
ini++;
cont++;
}
return (dest);
}

