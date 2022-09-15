#include "main.h"

/**
 * print_number - that prints an integer
 *
 * @a: print int
 *
 * Return: Always 0.
 */

void print_number(int a)
{
	unsigned int x, y, z;

	if (a < 0)
	{
		_putchar(45);
		x = a * -1;
	}
	else
		x = a;

	y = x;
	z = 1;

	while (y > 9)
	{
		y /= 10;
		z *= 10;
	}

	for (; z >= 1; z /= 10)
		_putchar(((x / z) % 10) + 48);
}
