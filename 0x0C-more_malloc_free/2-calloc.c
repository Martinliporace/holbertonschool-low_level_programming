#include "main.h"
#include <stdlib.h>
/**
* _calloc - sdgsdfgf
* @nmemb: coso
* @size: pum
*
*
* Return: ahre
*/

void *_calloc(unsigned int nmemb, unsigned int size)

{

char *x;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
x = malloc(nmemb * size);
if (!x)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
x[i] = 0;
return (x);

}

