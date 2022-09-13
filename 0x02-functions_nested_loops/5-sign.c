#include "main.h"

/**
 * print_sign - return 0 letter not lowercase, 1 letter lowercase
 *
 * @x: the int to print
 *
 * Return: Always 0.
 */
int print_sign(int x)
{
	if (x > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (x == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
