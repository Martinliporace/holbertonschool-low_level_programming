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

	if (n >= 0 && n < 15)


	for (a = 0; a <= n; a++)


	{	_putchar(48);
		for (b = 1; b <= n; b++)
		{
		r = (a * b);
		
		_putchar(',');
		_putchar(' ');
		
		if ((r / 100) > 0) /* r > 99 */
		{
		_putchar((r / 100) + '0');
		_putchar(((r / 10) % 10) + '0');
		_putchar((r % 10) + '0');
		}

		else if ((r / 10) > 0) /* r > 9 */

		{
		_putchar(' ');
		_putchar((r / 10) + '0');
		_putchar((r % 10) + '0');
		}
		
		else /* r <= 9 */

		{
		_putchar(' ');
		_putchar(' ');
		_putchar(r + '0');
		}
	


	}
	_putchar('\n');
	}

}

