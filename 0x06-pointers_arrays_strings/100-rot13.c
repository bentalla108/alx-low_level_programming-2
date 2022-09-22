#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @v: input string
 *
 * Return: the pointer
 */

char *rot13(char *v)
{
	int x = 0, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(v + x) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(v + x) == alphabet[j])
			{
				*(v + x) = rot13[j];
				break;
			}
		}
		x++;
	}
	return (v);
}
