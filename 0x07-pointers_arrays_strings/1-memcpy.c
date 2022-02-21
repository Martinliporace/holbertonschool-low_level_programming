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
unsigned int ini, cont;
ini = cont = 0;

while (dest[ini] != '\0')
ini++;
while (cont < n && (dest[ini] = src[cont]))
{
ini++;
cont++;
}
if (cont < n)

dest[ini] = src[cont];
return (dest);

}
