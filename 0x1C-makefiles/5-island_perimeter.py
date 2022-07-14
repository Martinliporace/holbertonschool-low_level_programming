#!/usr/bin/python3

def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""

    per = 0

    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                sum = 0
                square = grid[x][y]
                up = grid[x-1][y]
                down = grid[x+1][y]
                left = grid[x][y-1]
                right = grid[x][y+1]
                if up == 1:
                    sum += 1
                if down == 1:
                    sum += 1
                if left == 1:
                    sum += 1
                if right == 1:
                    sum += 1

                tmp = 4 - sum
                per += tmp
    return(per)
