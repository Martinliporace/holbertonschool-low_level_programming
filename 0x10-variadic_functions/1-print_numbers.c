#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - coso
* Return: pum
* @separator: separator
* @n: n
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i != n - 1)
			printf("%i%s", va_arg(ap, int), separator);
		else
			printf("%i", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
