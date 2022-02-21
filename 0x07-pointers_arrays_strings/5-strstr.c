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
int cont = 0;

while (*(haystack + cont))
{
if (*(haystack + cont) == *needle)
return (haystack + cont);
cont++;
 }
 if (*(haystack + cont) == *needle)
   {
return (haystack + cont);
   }
   
return (0);


}
