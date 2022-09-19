#include "main.h"

/**
 * puts_half - prints every other character of a string
 *
 * @str: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void puts_half(char *str)
{
	int j = 0, l;

	while (str[j] != '\0')
		j++;

	l = (j + 1) / 2;

	for (j = l; str[j]; j++)
		_putchar (str[j]);

	_putchar ('\n');
}
