#include "main.h"


/**
* coso -  coso
*
*
* @n: pum
* @x: otro pum
* Return: ahre
**/



int coso(int n, int x)
{
	if (n % x ==  0)
		return (0);
	if (x > 2)
		return (coso(n, x - 1));
	return (1);
}

/**
* is_prime_number - coso
* @n: pum
*
*
* Return: ahre
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (coso(n, n - 1));
}
