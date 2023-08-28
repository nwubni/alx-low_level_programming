#!/usr/bin/python3

"""Finds perimeter of island"""


def island_perimeter(grid):
    """A function that finds perimeter of island"""

    M = len(grid)
    N = len(grid[0])
    perimeter = 0

    for i in range(M):
        for j in range(N):
            if (grid[i][j] == 1):
                # Adds top perimeter of cell
                if (i == 0 or (i - 1 >= 0 and grid[i - 1][j] == 0)):
                    perimeter += 1
                # Adds left perimeter of cell
                if (j == 0 or (j - 1 >= 0 and grid[i][j - 1] == 0)):
                    perimeter += 1
                # Adds right perimeter of cell
                if (j == N - 1 or (j + 1 < N and grid[i][j + 1] == 0)):
                    perimeter += 1
                # Adds bottom perimeter of cell
                if (i == M - 1 or (i + 1 < M and grid[i + 1][j] == 0)):
                    perimeter += 1

    return perimeter
