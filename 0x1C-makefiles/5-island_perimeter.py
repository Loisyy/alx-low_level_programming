def island_perimeter(grid):
    """
    Function to calculate the perimeter of an island described in a grid.
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                # Check top neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1

    # Each cell adds 4 to the perimeter, each shared edge subtracts 2
    return size * 4 - edges * 2

