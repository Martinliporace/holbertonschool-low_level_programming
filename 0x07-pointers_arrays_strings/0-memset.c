#include "main.h"
/**
* _memset - fills memory with a constant byte.
* @s: coso
* @b: pum
* @n: ahre
* Description: show a string
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)

  {
unsigned int cont;
 for (cont = 0; cont < n; cont++)
   s[cont] = b;
return (s);
}
