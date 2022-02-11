#include "main.h"

/**
* swap_int - swaps the values of two integers.
* Return: Always 0.
*
* @a: first int
* @b: second int
*/
void swap_int(int *a, int *b)

{
int sw;

sw = 0;
sw = *a;
*a = *b;
*b = sw;
}
