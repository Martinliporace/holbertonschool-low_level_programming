#include "main.h"

/**
* _strchr - locates a character in a string.
* @s: coso
* @c: pum
*
* Description: show a string
* Return: a pointer to the first occurrence of the character c
*/

char *_strchr(char *s, char c)
{
int cont = 0;

while (*(s + cont))
{
if (*(s + cont) == c)
return (s + cont);
cont++;
}
if (*(s + cont) == c)
{
return (s + cont);
}
return (0);
}
