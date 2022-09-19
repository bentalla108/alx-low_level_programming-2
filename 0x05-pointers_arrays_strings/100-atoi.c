#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @z: String
 *
 * Return: Return the number
 */

int _atoi(char *z)
{
	unsigned int n = 0, j;
	int s = 1;

	for (j = 0; z[j] != '\0'; j++)
	{
		if (is_numerical(z[j]))
			n = (z[j] - 48) + n * 10;
		if (z[j + 1] == ' ')
			break;
		else if (z[j] == '-')
			s *= -1;
	}

	return (n * s);
}
