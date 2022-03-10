#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - coso
* Return: pum
* @separator: separator
* @n: n
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (separator && i != n - 1)
		{
			if (str)
				printf("%s%s", str, separator);
			else
				printf("(nil)%s", separator);
		}
		else
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
	}
	printf("\n");
	va_end(ap);
}
