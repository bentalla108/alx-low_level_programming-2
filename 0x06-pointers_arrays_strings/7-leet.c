#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @v: input string
 *
 * Return: the pointer
 */

char *leet(char *v)
{
	int x = 0, j, ll[] = {97, 101, 111, 116, 108}, ul[] = {65, 69, 79, 84, 76}, num[] = {52, 51, 48, 55, 49};

	while (*(v + x) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(v + x) == ll[j] || *(v + x) == ul[j])
			{
				*(v + x) = num[j];
				break;
			}
		}
		x++;
	}
	return (v);
}
