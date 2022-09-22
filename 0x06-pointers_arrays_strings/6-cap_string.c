#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @v: input string
 *
 * Return: the pointer
 */

char *cap_string(char *v)
{
	int x = 0, j;
	int w[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(v + x) >= 97 && *(v + x) <= 122)
		*(v + x) = *(v + x) - 32;
	x++;
	while (*(v + x) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(v + x) == w[j])
			{
				if ((*(v + (x + 1)) >= 97) && (*(v + (x + 1)) <= 122))
					*(v + (x + 1)) = *(v + (x + 1)) - 32;
				break;
			}
		}
		x++;
	}
	return (v);
}
