#include "main.h"


/**
* _sqrt -  coso
*
* @x: pum
*
* Return: ahre
**/

int _sqrt(int n, int x)
{
int y = x * x;

	if (y < n)
		return (_sqrt(n, x + 1));
	if (y == n)
		return (x);
	else
		return (-1);
}

/**
* _sqrt_recursion -  returns the natural square root of a number.
*
* @n: coso
*
* Return: If n does not have a natural square root,
* the function should return -1
**/

int _sqrt_recursion(int n)
{
return (_sqrt(n, 0));
}


