#include "main.h"

/**
* print_number - Prints an integer.
* @n: number
* Description: coso
*/
void print_number(int n)

{
	int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar('0' + (num % 10));
}