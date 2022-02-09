#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*
* 
*
* Return: 1..14 x 10
**/

void more_numbers(void)

{
int x, num, a, b;

for (x = 0 ; x <= 9; x++)
{
for (a = 0; a <= 14; a++)
{
b = a % 10;
if (a >= 10)
{
num = a / 10;
_putchar('0' + num);
}
_putchar('0' + b);
}
_putchar('\n');
}
}
