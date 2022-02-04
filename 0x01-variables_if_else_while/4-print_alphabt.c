#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except q and e.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
char letra;

for (letra = 'a'; letra <= 'z' !='q'; letra++)
if (letra != 'e' && letra != 'q')
putchar(letra);

putchar('\n');

return (0);
}
