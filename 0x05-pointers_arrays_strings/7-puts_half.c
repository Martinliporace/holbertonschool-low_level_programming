#include "main.h"
/**
* puts_half - print second half
* @str: string
*
* Description: show a half string
* Return: Always 0 (Success)
*/

void puts_half(char *str)
{
int t, tf, m, len;
len = _strlen(str);
t = len;
tf = (t % 2);
m = 0;
if (tf == 0)
m = (t/2);
else
m = ((t - 1) / 2);
while (*(str + m))
{
_putchar(*(str + m));
m++;
}
_putchar('\n');
}
      
