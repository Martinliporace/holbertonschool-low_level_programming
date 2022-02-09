#include "main.h"

/**
* print_most_numbers - prints the numbers, from 0 to 9
* Description: omite 4 and 2
* Return: numbers 1..9 except 2 and 4
*
*/

void print_most_numbers(void)
{
int num;

for (num = '0'; num <= '9'; num++)

if (num != '2' && num != '4')
_putchar(num);

_putchar('\n');


}
