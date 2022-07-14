#!/usr/bin/python3
"""Create a function def island_perimeter(grid)"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""

    per = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if (x-1) == -1 or grid[x-1][y] == 0:
                    per += 1
                if (x+1) == len(grid) or grid[x+1][y] == 0:
                    per += 1
                if (y-1) == -1 or grid[x][y-1] == 0:
                    per += 1
                if (y+1) == len(grid[x]) or grid[x][y+1] == 0:
                    per += 1
    return(per)
