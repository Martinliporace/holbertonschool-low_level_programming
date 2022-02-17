#include "main.h"

/**
* *rot13 -  encodes a string into ROT13.
* @s: string
*
*
* Return: pointer to s
*/

char *rot13(char *s)

{
int a_cont, cont;
char first[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char second[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

a_cont = 0;
while (s[a_cont] != '\0')
{
cont = 0;
while (cont < 52)
{
if (first[cont] == s[a_cont])
{
s[a_cont] = second[cont];
break;
}
cont++;
}
a_cont++;
}
return (s);
}
