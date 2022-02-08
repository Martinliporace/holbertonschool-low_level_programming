#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0.* @ld: last digit of the number
* 
* a - number 1, b - number 2, r - result
*
* Return: times table
**/

void times_table(void)

{
int a, b, r;

for (a = 0; a <= 9; a++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (b = 1; b <= 9; b++)
{
r = (a * b);
if ((r / 10) > 0)
{
_putchar((r / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((r % 10) + '0');

if (b < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}

}