#!/usr/bin/python3
"""island_perimeter function"""


def try_the_edges(r, c, grid):
    """checks perimeter of individual cells for water (0)
    Args:
        r (int): row coordinate
        c (int): column coordinate
        grid (list): list of lists
    Returns:
        count of zeroes or sides cell is surrounded by water
    """
    count = 0
    if r == 0 or grid[r - 1][c] == 0:
        count += 1
    if r == len(grid) - 1 or grid[r + 1][c] == 0:
        count += 1
    if c == 0 or grid[r][c - 1] == 0:
        count += 1
    if c == len(grid[0]) - 1 or grid[r][c + 1] == 0:
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
    if rows < 1:
        return perimeter
    columns = len(grid[0])

    for r in range(rows):
        for c in range(columns):
            if grid[r][c] == 1:
                perimeter += try_the_edges(r, c, grid)

    return perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]

    grid = [
        [1, 1],
        [1, 1]
    ]
    print(island_perimeter(grid))
