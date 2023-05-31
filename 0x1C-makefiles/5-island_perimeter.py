#!/usr/bin/python3
"""
Interview preparation
"""
def island_perimeter(grid):
    """
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    """
    line = []
    for k in grid:
        if sum(k) != 0:
            if sum(line) < sum(k):
                line = k

    col1 = []
    for i in range(len(grid)):
        col = [r[i] for r in grid]
        if sum(col) != 0:
            if sum(col1) < sum(col):
                col1 = col
    return (sum(line) + sum(col1)) * 2
