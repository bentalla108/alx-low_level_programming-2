#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @v: input string.
 *
 * Return: pointer
 */

char *string_toupper(char *v)
{
	int x = 0;

	while (*(v + x) != '\0')
	{
		if ((*(v + x) >= 97) && (*(v + x) <= 122))
			*(v + x) = *(v + x) - 32;
		x++;
	}
	return (v);
}
