#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
*
* @n: n
* @index: index
*
* Return: value of the bit.
*/



int get_bit(unsigned long int n, unsigned int index)


{
	unsigned int pos;

	if (n == 0)
		return (0);

	for (pos = 0; pos <= 63; n >>= 1, pos++)
	{
		if (index == pos)
		{
			return (n & 1);
		}
	}

	return (-1);
}
