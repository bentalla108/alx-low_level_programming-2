#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *
 * @a: input pointer
 *
 * @size: size of the matrix
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int j, x = 0, y = 0;

	for (j = 0; j < (size * size); j++)
	{
		if (j % (size + 1) == 0)
			x += *(a + j);
		if (j % (size - 1) == 0 && j != 0 && j < size * size - 1)
			y += *(a + j);
	}
	printf("%d, %d\n", x, y);
}
