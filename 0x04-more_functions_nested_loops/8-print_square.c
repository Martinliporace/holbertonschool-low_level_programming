#include "main.h"
/**
* print_square - prints a square, followed by a new line.
*
* @size: number
*
* Return: square
**/
void print_square(int size)

{
int fila, col;

if (size <= 0)
	_putchar('\n');
for (fila = 0; fila < size; fila++)
{
	for (col = 0; col < size ; col++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}
