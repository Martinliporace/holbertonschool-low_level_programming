#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* binary_search -  searches for a value in a sorted array of integers using
* the Binary search algorithm
* @array: pointer to array
* @size: size of array
* @value: value to search
* Return: first index where value is located or -1
* if value is not present in array or if array is NULL
*/

int binary_search(int *array, size_t size, int value)

{
	int low, mid, high, x, i;

	low = 0;
	high = size - 1;
	x = value;

	while (low <= high)
		{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[high]);
		if (array[mid] == x)
			return (mid);

		else if (array[mid] < x)
			low = mid + 1;

		else
			high = mid - 1;
		}

	return (-1);
}
