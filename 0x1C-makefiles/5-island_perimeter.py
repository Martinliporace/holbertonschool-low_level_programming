#!/usr/bin/python3
"""Create a function def island_perimeter(grid)"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""

    per = 0
    if grid != []:
        for x in range(len(grid)):
            for y in range(len(grid[x])):
                if grid[x][y] == 1:
                    sum = 0
                    up = grid[x-1][y]
                    down = grid[x+1][y]
                    left = grid[x][y-1]
                    right = grid[x][y+1]
                    if (x-1) == -1 or up == 0:
                        sum += 1
                    if (x+1) == len(grid) or down == 0:
                        sum += 1
                    if (y-1) == -1 or left == 0:
                        sum += 1
                    if (y+1) == len(grid[x]) or right == 0:
                        sum += 1
                    per += sum
    return(per)
