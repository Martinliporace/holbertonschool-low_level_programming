#include "3-calc.h"

/**
* op_add - adds two ints
* @a: number 1
* @b: number 2
* Return: the sum of a and b
**/

int op_add(int a, int b)

{
	return (a + b);
}


/**
* op_sub - subtract two numbers
* @a: number 1
* @b: number 2
* Return: the difference of a and b
**/

int op_sub(int a, int b)

{
	return (a - b);
}


/**
* op_mul - multiply two numbers
* @a: number 1
* @b: number 2
* Return: the product of a and b
**/

int op_mul(int a, int b)

{
	return (a * b);
}


/**
* op_div - divides two numbers
* @a: number 1
* @b: number 2
* Return: the result of the division of a by b
**/

int op_div(int a, int b)

{
	if (b == 0)
		return (-1);
	return (a / b);
}


/**
* op_mod - calculates mod of two ints
* @a: number 1
* @b: number 2
* Return: the remainder of the division of a by b
**/

int op_mod(int a, int b)

{
	if (b == 0)
		return (-1);
	return (a % b);
}
