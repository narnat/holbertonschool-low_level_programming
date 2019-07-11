#!/usr/bin/python3
"""
Function which finds the perimeter of an island
"""


def island_perimeter(grid):
    """Function to find the perimeter of an island"""
    res = 0
    for i, arr in enumerate(grid):
        for j, val in enumerate(arr):
            if (val == 1):
                res += 4
                if arr[j - 1] == 1:
                    res -= 1
                if arr[j + 1] == 1:
                    res -= 1
                if grid[i - 1][j] == 1:
                    res -= 1
                if grid[i + 1][j] == 1:
                    res -= 1

    return res