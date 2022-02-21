#include "main.h"
/**
* _memcpy -  copies memory area.
* @dest: coso
* @src: pum
* @n: ahre
* Description: show a string
* Return: pointer to the memory area dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int cont;
for (cont = 0; cont < n; cont++)
dest[cont] = src[cont];
return (dest);

}
