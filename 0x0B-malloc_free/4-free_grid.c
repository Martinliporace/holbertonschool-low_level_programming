#include "main.h"
#include <stdlib.h>


/**
* free_grid -  frees a bidimensional grid previously created
* @grid: coso
* @height: pum
* Return: ahre
**/

void free_grid(int **grid, int height)


{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
