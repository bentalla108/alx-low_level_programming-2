#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of the array
 *
 * @height: height of the array
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **go;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	go = malloc(height * sizeof(int *));

	if (go == NULL)
	{
		free(go);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		go[i] = malloc(width * sizeof(int));
		if (go[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(go[i]);
			free(go);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			go[i][j] = 0;
	return (go);
}
