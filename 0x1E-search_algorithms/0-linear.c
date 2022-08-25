#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search -  searches for a value in a sorted array of integers using
* the Binary search algorithm
* @array: pointer to array
* @size: size of array
* @value: value to search
* Return: first index where value is located or -1
* if value is not present in array or if array is NULL
*/

int linear_search(int *array, size_t size, int value)

{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		}
	return (-1);

}
