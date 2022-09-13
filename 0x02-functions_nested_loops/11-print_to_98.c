#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from x to 98.
 *
 * @x: the number to start counting from x to 98
 *
 * Return: Always 0.
 */
void print_to_98(int x)
{
	if (x < 98)
	{
		for (x = x; x < 98; x++)
			printf("%d, ", x);
		printf("%d\n", 98);
	}
	else
	{
		for (x = x; x > 98; x--)
			printf("%d, ", x);
		printf("%d\x", 98);
	}
}
