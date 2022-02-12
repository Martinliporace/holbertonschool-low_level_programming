#include "main.h"
/**
* puts2 - print text
* @str: string
*
* Description: show a string
* Return: Always 0 (Success)
*/

void puts2(char *str)

{
int c = 0;

while (*(str + c))
{
if (c % 2 == 0)
_putchar(*(str + c));
c++;
}
_putchar('\n');
}
