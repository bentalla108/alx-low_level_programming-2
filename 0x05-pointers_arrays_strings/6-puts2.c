#include "main.h"

/**
 * puts2 - prints every character of a string
 *
 * @str: A pointer to an int that will be changed
 *
 * Return: void which means it is correct
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
			_putchar (str[x]);
	}

	_putchar ('\n');
}
