#include "main.h"

/**
 * _strlen -length of a string
 *
 * @t: A pointer to an int that will be changed/updated
 *
 * Return: void that means our answer is correct
 */

int _strlen(char *t)
{
	int x = 0;

	while (t[x] != '\0')
		x++;
	return (x);
}
