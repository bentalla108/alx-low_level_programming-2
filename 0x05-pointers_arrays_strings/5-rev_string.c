#include "main.h"

/**
 * rev_string - prints a reverse string
 *
 * @z: A pointer to an int that will be changed
 *
 * Return: void
 */

void rev_string(char *z)
{
	char *start_c, *end_c, c;
	int j, s, l = 0;

	for (j = 0; z[j]; j++)
		l++;

	s = l;

	start_c = z;
	end_c = z;


	for (j = 0; j < s - 1; j++)
		end_c++;

	for (j = 0; j < s / 2; j++)
	{
		c = *end_c;
		*end_c = *start_c;
		*start_c = c;

		start_c++;
		end_c--;
	}
}
