#include <stdio.h>

/**
* main - Prints the alphabet in lowercase.
*
* Return: Always 0.
*
*/

int main(void)
{
char letra;

for (letra = 'a'; letra <= 'z'; letra++)
putchar(letra);

putchar('\n');

return (0);
}
