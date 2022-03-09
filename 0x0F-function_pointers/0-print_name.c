#include "function_pointers.h"

/**
* print_name - print a name
* @name: coso
* @f: pum
* Return: ahre
*/

void print_name(char *name, void (*f)(char *))
{


if (name != NULL && f != NULL && *name != '\0')
f(name);
}
