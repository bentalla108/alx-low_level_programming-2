#include "main.h"

/*
 * print_alphabet - print alphabet of letters
 *
 * Returns void
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
