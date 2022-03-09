#include <stdio.h>
#include <stdlib.h>

#include "3-calc.h"

/**
* op_add - add
* @a: array of elements
* @b: number
*
* Return: coso
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - substract
* @a: array of elements
* @b: number
*
*
* Return: coso
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplicate
* @a: array of elements
* @b: number
*
*
* Return: coso
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - division
* @a: array of elements
* @b: number
*
*
* Return: coso
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - modulo
* @a: array of elements
* @b: number
*
*
* Return: coso
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

