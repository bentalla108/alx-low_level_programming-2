#include "main.h"

/**
 * print_last_digit - last digit
 *
 * @x: The int to print
 *
 * Return: Always 0.
 */
int print_last_digit(int x)
{

	int last_digit;

	if (x < 0)
	{
		last_digit = (-1 * (x % 10));
		_putchar (last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = (x % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}
}
