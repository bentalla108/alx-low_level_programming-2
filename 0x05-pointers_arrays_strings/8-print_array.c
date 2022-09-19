#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @b: A pointer to an int that will be updated/ changed
 *
 * @x: return value x
 *
 * Return: void which ,means our answer is correct
 */

void print_array(int *b, int x)
{
	int j = 0;

	while (j < x)
	{
		printf("%d", b[j]);
		if (j < x - 1)
			printf(", ");

		j++;
	}

	printf("\n");
}
