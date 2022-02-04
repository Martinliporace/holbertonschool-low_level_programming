#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */

int main(void)
{
char letra;

for (letra = 'a'; letra <= 'z'; letra++)
putchar(letra);

for (letra = 'A'; letra <= 'Z'; letra++)
putchar(letra);

putchar('\n');

return (0);
}
