#!/usr/bin/python3
"""Module to find the perimeter of an island"""


def island_perimeter(grid):
    """Finds the perimeter of an island defined in grid"""
    n = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if grid[i][j + 1] == 0 or j == (len(grid[0]) - 1):
                    n += 1
                if grid[i][j - 1] == 0 or j == 0:
                    n += 1
                if grid[i + 1][j] == 0 or i == (len(grid) - 1):
                    n += 1
                if grid[i + 1][j] == 0 or i == 0:
                    n += 1
    return n
