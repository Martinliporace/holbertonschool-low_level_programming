#include "main.h"
/**
* _puts - print text
* @str: string
*
* Description: show a string
* Return: Always 0 (Success)
*/

void _puts(char *str)
{
int c = 0;

while (*(str + c))
{
_putchar(*(str + c));
c++;
}
_putchar('\n');
}
