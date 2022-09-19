#include "main.h"

/**
 * print_rev - prints a string in reverse order
 *
 * @z: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void print_rev(char *z)
{
	int j = 0;

	while (z[j] != '\0')
		j++;

	for (j = j - 1 ; j >= 0; j--)
		_putchar (z[j]);

	_putchar ('\n');
}
