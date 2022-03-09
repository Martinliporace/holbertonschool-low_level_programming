#include "function_pointers.h"

/**
* int_index - searches for an integer.* on each element of an array.
* @array: coso
* @size: pum
* @cmp: ahre
* Return: of the jedi
*/

int int_index(int *array, int size, int (*cmp)(int))

{

{
if (size <= 0)
	return (-1);
}

{
int i;
int x = size;

for (i = 0; i <= x; i++)


if (cmp(array[i]) != 0)
return (i);
}

return (-1);
}
