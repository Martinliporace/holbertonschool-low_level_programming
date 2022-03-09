#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - prints a name
* @name: coso
* @f: pum
*
*
*/

void print_name(char *name, void (*f)(char *name))
{
if (name != NULL && f != NULL)
f(name);
}
