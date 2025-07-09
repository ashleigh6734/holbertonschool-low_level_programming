#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the array, or NULL on failure or invalid input
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    /* Allocate memory for the row pointers */
    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            /* Free previously allocated rows on failure */
            while (--i >= 0)
                free(grid[i]);
            free(grid);
            return (NULL);
        }

        /* Initialize elements to 0 */
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}
