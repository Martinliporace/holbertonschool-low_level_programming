#include "main.h"
#include "1-alphabet.c"

/**
* void print_alphabet_x10(void) - Prints the alphabet in lowercase 10 times
* Return: Always 0.
*
*/

void print_alphabet_x10(void)

{

int x;
for (x=0; x <= 9; x++)
  print_alphabet(); 
_putchar('\n');

}
