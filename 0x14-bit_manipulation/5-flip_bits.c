#include "main.h"

/**
* flip_bits- returns the number of bits you would need
* to flip to get from onenumber to another.
* @n: n
* @m: m
*
* Return: coso
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int comp = 0;
	int cont = 0;

	comp = n ^ m;

	while (comp)
		{


		if (comp & 1)
		{
			cont++;

		}
			comp >>= 1;
	}

return (cont);



}
