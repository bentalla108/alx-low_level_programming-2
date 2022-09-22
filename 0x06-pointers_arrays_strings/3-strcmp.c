#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: 0 if s1 and s2 are equals, another number if not
 */

int _strcmp(char *s1, char *s2)
{
	int q = 0, w = 0;

	while (w == 0)
	{
		if ((*(s1 + q) == '\0') && (*(s2 + q) == '\0'))
			break;
		w = *(s1 + q) - *(s2 + q);
		q++;
	}
	return (w);
}
