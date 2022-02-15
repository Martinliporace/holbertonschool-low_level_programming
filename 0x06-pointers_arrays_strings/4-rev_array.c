#include "main.h"
/**
*reverse_array -  reverses the content of an array of integers
*@a: pointer to array.
*@n: number of elements of the array
*
*Return: void.
*/
void reverse_array(int *a, int n)
{
	int res, cont;

	n = n - 1;
	cont = 0;
	while (cont <= n)
	{
		res = a[cont];
		a[cont++] = a[n];
		a[n--] = res;
	}
}
