#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - coso
* Return: pum
* @separator: separator
* @n: n
*/

void print_strings(const char *separator, const unsigned int n, ...)


{
if (separator != NULL)
{
va_list ap;
unsigned int i;

va_start(ap, n);
for (i = 0; i < n - 1; i++)

printf("%d%s", va_arg(ap, int), separator);
printf("%d", va_arg(ap, int));
printf("\n");
}

}