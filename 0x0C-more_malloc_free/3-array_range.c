#include "main.h"
#include <stdlib.h>

/**
* array_range - coso
* @min: pum
* @max: ahre
*
* Description: creates an array of integers.
* Return: Always 0 (Success)
*/

int *array_range(int min, int max)
{
int pos, x;
int *res;

if (min > max)
return (NULL);
x = max - min + 1;
dest = malloc(sizeof(int) * x);
if (res)
return (NULL);
for (pos = 0; pos < x; pos++, min++)
res[pos] = min;
return (res);
}
