#include "main.h"

/*
 * print_alphabet - print alphabet of letters
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
