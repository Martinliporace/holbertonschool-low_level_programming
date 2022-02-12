#include "main.h"
/**
* print_rev - prints a string, in reverse
* @s : string
*
* Description: show a string in reverse
* Return: Always 0 (Success)
*/

void print_rev(char *s)

{
int c = 0;

while (c >= 0)
{
if (s[c] == '\0')
break;
c++;
}

for (c--; c >= 0; c--)
_putchar(s[c]);
_putchar('\n');
}
