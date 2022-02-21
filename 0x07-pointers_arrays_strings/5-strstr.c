#include "main.h"

/**
* _strstr - locates a substring in a string.
* @haystack: coso
* @needle: pum
*
* Description: show a string
* Return: pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
int cont1 = 0;
int cont2 = 0;

while (haystack[cont1])
{
while (needle[cont2] && haystack[cont1] == needle[0])
if (haystack[cont2 + cont1] == needle[cont2])
cont2++;
else
break;
if (needle[cont2])
{
cont1++;
cont2 = 0;
}
else
return (haystack + cont1);
}
return (0);
}
