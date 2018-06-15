#!/usr/bin/python3
"""island_perimeter function"""


def island_perimeter(grid):
    """perimeter of island (1) surrounded by water (0)
    Args:
        grid (list): list of lists
    Returns:
        perimeter number of cells the island is surrounded by water
    """
    perimeter = 0

    for r in range(1, rows - 1):
        for c in range(1, columns - 1):
            if grid[r][c] == 1:
                if grid[r - 1][c] == 0:
                    perimeter += 1
                if grid[r][c + 1] == 0:
                    perimeter += 1
                if grid[r + 1][c] == 0:
                    perimeter += 1
                if grid[r][c - 1] == 0:
                    perimeter += 1

    return perimeter
