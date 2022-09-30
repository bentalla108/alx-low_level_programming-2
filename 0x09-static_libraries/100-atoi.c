#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: String
 *
 * Return: Return the number
 */

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, o = 0, p = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			p *= -1;
		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		o = o + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (o * p);
}
