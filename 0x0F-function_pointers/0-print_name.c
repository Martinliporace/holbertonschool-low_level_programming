#include "function_pointers.h"

/**
* print_name - print a name
* @name: coso
* @f: pum
* Return: void
*/

void print_name(char *name, void (*f)(char *name))

{
if (name != NULL && f != NULL)
f(name);
}
