#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: input integer
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int a, b, x = 1;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
		a = n;

	b = a;

	while (b < 9)
	{
		b /= 10;
		x *= 10;
	}
	for (; x >= 1; x /= 10)
		_putchar(((a / x) % 10) + 48);
}
