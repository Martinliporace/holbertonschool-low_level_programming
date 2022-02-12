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
int len = 0;
char *t = str;
int n;

while (*t != 0)
{
t++;
len++;
}
if (len % 2 == 0)
{
n = len / 2;
}
else
{
n = (len + 1) / 2;
}
for ( ; n < len ; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
