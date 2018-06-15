#!/usr/bin/python3
"""island_perimeter function"""


def check_peri(r, c, grid):
    """checks perimeter of individual cells for water (0)
    Args:
        r (int): row coordinate
        c (int): column coordinate
        grid (list): list of lists
    Returns:
        count of zeroes or sides cell is surrounded by water
    """

    count = 0
    if grid[r - 1][c] == 0:
        count += 1
    if grid[r][c + 1] == 0:
        count += 1
    if grid[r + 1][c] == 0:
        count += 1
    if grid[r][c - 1] == 0:
        count += 1
    return count


def island_perimeter(grid):
    """perimeter of island (1) surrounded by water (0)
    Args:
        grid (list): list of lists
    Returns:
        perimeter number of cells the island is surrounded by water
    """

    perimeter = 0
    if not grid:
        return perimeter
    if type(grid) is not list:
        return perimeter
    rows = len(grid)
    if rows < 3:
        return perimeter
    columns = len(grid[0])
    if columns < 3:
        return perimeter

    for r in range(1, rows - 1):
        for c in range(1, columns - 1):
            if grid[r][c] == 1:
                perimeter += check_peri(r, c, grid)
    return perimeter
