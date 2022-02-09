#include "main.h"

/**
* print_diagonal -  draws a diagonal line on the terminal.
* @n: number
*
* Return: A diagonal line
*/

void print_diagonal(int n)
{
int x, s;

for (x = 1; x <= n; x++)
{
for (s = 1; s < x; s++)

_putchar(' ');
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
