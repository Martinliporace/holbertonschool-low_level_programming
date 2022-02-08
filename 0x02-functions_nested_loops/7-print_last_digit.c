#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number
* @ld: last digit of the number
* Return: value of the last digit
*/
int print_last_digit(int ld)
{

int n;

n = (ld % 10);

if (n < 0)
{
n = (-1 * n);
}

_putchar(n + '0');
return (n);
}