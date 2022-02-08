#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack
*
*
* Return: 24 hs
*
**/
void jack_bauer(void)
{
int h1, h2, m1, m2, max;

for (h1 = 0; h1 <= 2; h1++)
{
if (h1 == 2)
max = 3;
else
max = 9;
for (h2 = 0; h2 <= max; h2++)
for (m1 = 0; m1 <= 5; m1++)
for (m2 = 0; m2 <= 9; m2++)
{
_putchar('0' + h1);
_putchar('0' + h2);
_putchar(':');
_putchar('0' + m1);
_putchar('0' + m2);
_putchar('\n');
}
}
}
