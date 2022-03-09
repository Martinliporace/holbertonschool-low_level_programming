#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* on each element of an array.
* @array: coso
* @size: pum
* @action: ahre
* Return: of the jedi
*/

void array_iterator(int *array, size_t size, void (*action)(int))

{

int i;
int x = size;
for (i = 0; i <= x; i++)
	action(array[i]);

}
