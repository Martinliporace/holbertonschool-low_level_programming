#include "main.h"


/**
* print_times_table - If n > 15 or < 0 the function should not print anything
* Format: see example
*
* a - number 1, b - number 2, r - result
*
* Return: times table
**/

void print_times_table(int n)


{
int a, b, r;

	if (n > 0 && n < 15)

	for (a = 0; a <= n; a++)


	{
		for (b = 0; b <= n; b++)
		{
		r = (a * b);
		if ((r / 100) > 0)
		{
		_putchar((r / 100) + '0');
		_putchar(((r / 10) % 10) + '0');

		}

		else if ((r / 10) > 0)
		{
		_putchar((r / 10) + '0');
		}
	else
	{
	_putchar(' ');
	}
	_putchar((r % 10) + '0');

	if (b < n)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}

	}

