#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (List[List[int]]): A 2D grid representing
    the island, where 0 represents water and 1 represents land.

    Returns:
    int: The perimeter of the island.
    """
    if not grid:
        return 0

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4  # Each land cell contributes 4 to the perimeter

                # Check the neighboring cells and subtract the shared perimeter
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Subtract 2 for the shared top edge
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # Subtract 2 for the shared left edge

    return perimeter
